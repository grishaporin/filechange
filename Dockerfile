FROM golang

WORKDIR /app

COPY . .

ENTRYPOINT [ "go", "run", "main.go" ]