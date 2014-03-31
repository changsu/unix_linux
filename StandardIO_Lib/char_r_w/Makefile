CC=g++
CFLAGS=-c -Wall
CHAR_RW=char_rw

all: $(CHAR_RW)

$(CHAR_RW): char_rw.o
	$(CC) char_rw.o -o $(CHAR_RW)

char_rw.o: char_rw.c
	$(CC) $(CFLAGS) char_rw.c
clean:
	rm -fr *.o $(CHAR_RW)
