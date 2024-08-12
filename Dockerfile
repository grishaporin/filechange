FROM golang

WORKDIR /app

COPY . .

ARG wkdir=dir
ARG old=int
ARG new=float
ENV wkdir=${wkdir}
ENV old=${old}
ENV new=${new}

CMD go run main.go ${wkdir} ${old} ${new}