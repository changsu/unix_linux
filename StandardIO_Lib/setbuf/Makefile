CC=g++
CFLAGS=-c -Wall
SETBUF=setbuf

all: $(SETBUF)

$(SETBUF): setbuf.o
	$(CC) setbuf.o -o $(SETBUF)

setbuf.o: setbuf.c
	$(CC) $(CFLAGS) setbuf.c
clean:
	rm -fr *.o $(SETBUF)
