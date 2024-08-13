package main

import (
	"bufio"
	"fmt"
	"io/fs"
	"log"
	"os"
	"path/filepath"
	"strings"
)

var logger *log.Logger

func LogChanges(name string, pos int, logHist [3]string, newString string) {

	logger.Println("Изменён файл: " + name)

	//Форматирование истории замен

	var maxlen int
	for _, str := range logHist {
		if maxlen < len(str) {
			maxlen = len(str)
		}
	}
	var result string

	if pos > 1 {
		result = fmt.Sprintf("%04d\t%-*s      %s\n", pos-1, maxlen, logHist[0], logHist[0])
	}

	result = result + fmt.Sprintf("%04d\t%-*s  ->  %s\n", pos, maxlen, logHist[1], newString)

	result = result + fmt.Sprintf("%04d\t%-*s      %s\n", pos+1, maxlen, logHist[2], logHist[2])

	logger.Println(result)
}

func ProcessFile(path string) {

	f, err := os.Open(path)
	if err != nil {
		panic(err)
	}
	defer f.Close()

	scanner := bufio.NewScanner(f)

	//Сохранения результата, чтобы переписать файл в случае замены строки в нём
	isChanged := false
	result := []string{}

	//Буфер замен строки на случай нескольких замен в одной строке
	logoldBuf := []string{}
	lognewBuf := []string{}

	for scanner.Scan() {
		input := scanner.Text()

		//Если в предыдущей строке были замены, записать их в лог с текущей строкой после замены
		if len(logoldBuf) != 0 {

			history := [3]string{}

			//Если замена была не в первой строке файла, записать предыдущую строку в лог перед заменой
			if len(result) > 1 {
				history[0] = result[len(result)-2]
			}

			history[2] = input
			for i, log := range lognewBuf {

				history[1] = logoldBuf[i]

				LogChanges(path, len(result), history, log)
			}

			logoldBuf = []string{}
			lognewBuf = []string{}
		}

		//Если срока содержик строку для замены, изменить сроку и созранить изменения в буфер
		for strings.Contains(input, os.Args[2]) {

			if !isChanged {
				isChanged = true
			}

			logoldBuf = append(logoldBuf, input)

			input = strings.Replace(input, os.Args[2], os.Args[3], 1)

			lognewBuf = append(lognewBuf, input)

		}

		result = append(result, input)
	}

	//Если замены былы в последней строке файла, записать их в лог с пустой строкой после замены
	if len(logoldBuf) != 0 {
		history := [3]string{}

		if len(result) > 1 {
			history[0] = result[len(result)-2]
		}

		for i, log := range lognewBuf {

			history[1] = logoldBuf[i]

			LogChanges(path, len(result), history, log)
		}
	}

	//Сохранить изменения в файл
	if isChanged {
		err := os.WriteFile(path, []byte(strings.Join(result, "\n")), 0644)
		if err != nil {
			panic(err)
		}
	}

}

func visit(path string, d os.DirEntry, err error) error {

	if err != nil {

		logger.Println("Ошибка по пути: " + path + "\nЭтот каталог будет пропущен\n")

		return fs.SkipDir
	}

	//Обработка файла
	if !d.IsDir() {
		ProcessFile(path)
	}

	return nil
}

func main() {

	if len(os.Args) < 4 {
		fmt.Println("Недостаточно аргументов.\nПравильный вызов программы:", os.Args[0], "[Каталог с файлами] [Строка для замены] [Новая строка]")
		return
	}

	//Создание файла с логами

	err := os.MkdirAll("logs", os.ModePerm)
	if err != nil {
		panic(err)
	}

	f, err := os.CreateTemp("logs", "log-*.txt")
	if err != nil {
		panic(err)
	}
	defer f.Close()
	logger = log.New(f, "", 0)

	logger.Println("Список изменений сроки \"" + os.Args[2] + "\" на строку \"" + os.Args[3] + "\" в каталоге: " + os.Args[1] + "\n")

	//Проход по каталогу
	err = filepath.WalkDir(os.Args[1], visit)
	if err != nil {
		panic(err)
	}

	//Пауза для прочтения логов в контейнере? | сохранять логи на volume? | выводить логи в логи контейнера?
	fmt.Print("Нажмите Enter, чтобы закрыть программу.")
	var s string
	fmt.Scanln(&s)
}
