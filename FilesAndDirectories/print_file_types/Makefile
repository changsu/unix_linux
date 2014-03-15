CC=g++
CFLAGS=-c -Wall
FILE_TYPES=file_types

all: $(FILE_TYPES)

$(FILE_TYPES): file_types.o
	$(CC) file_types.o -o $(FILE_TYPES)

file_types.o: file_types.c
	$(CC) $(CFLAGS) file_types.c
clean:
	rm -fr *.o $(FILE_TYPES)
