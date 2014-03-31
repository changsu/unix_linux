CC=g++
CFLAGS=-c -Wall
LINE_RW=line_rw

all: $(LINE_RW)

$(LINE_RW): line_rw.o
	$(CC) line_rw.o -o $(LINE_RW)

line_rw.o: line_rw.c
	$(CC) $(CFLAGS) line_rw.c
clean:
	rm -fr *.o $(LINE_RW)
