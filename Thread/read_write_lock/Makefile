CC=g++
CFLAGS=-c -Wall
READ_WRITE_LOCK=read_write_lock

all: $(READ_WRITE_LOCK)

$(READ_WRITE_LOCK): read_write_lock.o
	$(CC) read_write_lock.o -o $(READ_WRITE_LOCK)

read_write_lock.o: read_write_lock.c
	$(CC) $(CFLAGS) read_write_lock.c
clean:
	rm -fr *.o $(READ_WRITE_LOCK)
