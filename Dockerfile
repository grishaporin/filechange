FROM golang

WORKDIR /app

COPY . .

ARG WKDIR=dir
ARG OLD=int
ARG NEW=float
ENV WKDIR=${WKDIR}
ENV OLD=${OLD}
ENV NEW=${NEW}

CMD ["sh", "-c", "go run main.go $WKDIR $OLD $NEW"]