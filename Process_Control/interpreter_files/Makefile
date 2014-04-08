CC=g++
CFLAGS=-c -Wall
INT_FILES=int_files

all: $(INT_FILES)

$(INT_FILES): int_files.o
	$(CC) int_files.o -o $(INT_FILES)

int_files.o: int_files.c
	$(CC) $(CFLAGS) int_files.c
clean:
	rm -fr *.o $(INT_FILES)
