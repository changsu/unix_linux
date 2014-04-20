CC=g++
CFLAGS=-c -Wall
MMAP_CODE=mmap_code

all: $(MMAP_CODE)

$(MMAP_CODE): mmap_code.o
	$(CC) mmap_code.o -o $(MMAP_CODE)

mmap_code.o: mmap_code.c
	$(CC) $(CFLAGS) mmap_code.c
clean:
	rm -fr *.o $(MMAP_CODE)
