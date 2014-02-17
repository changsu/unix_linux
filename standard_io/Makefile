CC=g++
CFLAGS=-c -Wall
STANDARD_IO=standard_io

all: $(STANDARD_IO)

$(STANDARD_IO): standard_io.o
	$(CC) standard_io.o -o $(STANDARD_IO)

standard_io.o: standard_io.c
	$(CC) $(CFLAGS) standard_io.c
clean:
	rm -fr *.o $(STANDARD_IO)
