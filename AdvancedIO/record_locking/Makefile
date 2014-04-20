CC=g++
CFLAGS=-c -Wall
DEADLOCK=deadlock

all: $(DEADLOCK)

$(DEADLOCK): deadlock.o
	$(CC) deadlock.o -o $(DEADLOCK)

deadlock.o: deadlock.c
	$(CC) $(CFLAGS) deadlock.c
clean:
	rm -fr *.o $(DEADLOCK)
