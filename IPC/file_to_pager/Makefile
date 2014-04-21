CC=g++
CFLAGS=-c -Wall
FILE_TO_PAGER=file_to_pager

all: $(FILE_TO_PAGER)

$(FILE_TO_PAGER): file_to_pager.o
	$(CC) file_to_pager.o -o $(FILE_TO_PAGER)

file_to_pager.o: file_to_pager.c
	$(CC) $(CFLAGS) file_to_pager.c
clean:
	rm -fr *.o $(FILE_TO_PAGER)
