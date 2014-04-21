CC=g++
CFLAGS=-c -Wall
FILE_TO_PAGER_SIMPLE=file_to_pager_simple

all: $(FILE_TO_PAGER_SIMPLE)

$(FILE_TO_PAGER_SIMPLE): file_to_pager_simple.o
	$(CC) file_to_pager_simple.o -o $(FILE_TO_PAGER_SIMPLE)

file_to_pager_simple.o: file_to_pager_simple.c
	$(CC) $(CFLAGS) file_to_pager_simple.c
clean:
	rm -fr *.o $(FILE_TO_PAGER_SIMPLE)
