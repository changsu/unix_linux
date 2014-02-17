CC=g++
CFLAGS=-c -Wall
PROCESS=process
READ_CMD=read_cmd

all: $(PROCESS) $(READ_CMD)

$(PROCESS): process.o
	$(CC) process.o -o $(PROCESS)

$(READ_CMD): read_cmd.o
	$(CC) read_cmd.o -o $(READ_CMD)

process.o: process.c
	$(CC) $(CFLAGS) process.c

read_cmd.o: read_cmd.c
	$(CC) $(CFLAGS) read_cmd.c

clean:
	rm -fr *.o $(PROCESS) $(READ_CMD)