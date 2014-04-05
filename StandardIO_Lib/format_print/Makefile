CC=g++
CFLAGS=-c -Wall
FORMAT_PRINT=format_print

all: $(FORMAT_PRINT)

$(FORMAT_PRINT): format_print.o
	$(CC) format_print.o -o $(FORMAT_PRINT)

format_print.o: format_print.c
	$(CC) $(CFLAGS) format_print.c
clean:
	rm -fr *.o $(FORMAT_PRINT)
