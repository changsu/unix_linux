CC=g++
CFLAGS=-c -Wall
PROCESS=process

all: $(PROCESS)

$(PROCESS): process.o
	$(CC) process.o -o $(PROCESS)

process.o: process.c
	$(CC) $(CFLAGS) process.c
clean:
	rm -fr *.o $(PROCESS)
