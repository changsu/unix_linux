CC=g++
CFLAGS=-c -Wall
FILE_IO=file_io

all: $(FILE_IO)

$(FILE_IO): file_io.o
	$(CC) file_io.o -o $(FILE_IO)

file_io.o: file_io.c
	$(CC) $(CFLAGS) file_io.c
clean:
	rm -fr *.o $(FILE_IO)
