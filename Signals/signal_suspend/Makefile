CC=g++
CFLAGS=-c -Wall
SIGSUSPEND=sigsuspend

all: $(SIGSUSPEND)

$(SIGSUSPEND): sigsuspend.o
	$(CC) sigsuspend.o -o $(SIGSUSPEND)

sigsuspend.o: sigsuspend.c
	$(CC) $(CFLAGS) sigsuspend.c
clean:
	rm -fr *.o $(SIGSUSPEND)
