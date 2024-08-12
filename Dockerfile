FROM golang

WORKDIR /app

COPY . .

RUN [ "go", "build" ]

ENTRYPOINT [ "./filechange" ]