CC=g++
CFLAGS=-c -Wall
BINARY_IO=binary_io

all: $(BINARY_IO)

$(BINARY_IO): binary_io.o
	$(CC) binary_io.o -o $(BINARY_IO)

binary_io.o: binary_io.c
	$(CC) $(CFLAGS) binary_io.c
clean:
	rm -fr *.o $(BINARY_IO)
