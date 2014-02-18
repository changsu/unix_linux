CC=g++
CFLAGS=-c -Wall
FILE_HOLE=file_hole

all: $(FILE_HOLE)

$(FILE_HOLE): file_hole.o
	$(CC) file_hole.o -o $(FILE_HOLE)

file_hole.o: file_hole.c
	$(CC) $(CFLAGS) file_hole.c
clean:
	rm -fr *.o $(FILE_HOLE)
