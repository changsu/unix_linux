CC=g++
CFLAGS=-c -Wall
BUFFER_TYPE=buffer_type

all: $(BUFFER_TYPE)

$(BUFFER_TYPE): buffer_type.o
	$(CC) buffer_type.o -o $(BUFFER_TYPE)

buffer_type.o: buffer_type.c
	$(CC) $(CFLAGS) buffer_type.c
clean:
	rm -fr *.o $(BUFFER_TYPE)
