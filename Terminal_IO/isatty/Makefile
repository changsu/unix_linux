CC=g++
CFLAGS=-c -Wall
ISATT=isatt

all: $(ISATT)

$(ISATT): isatt.o
	$(CC) isatt.o -o $(ISATT)

isatt.o: isatt.c
	$(CC) $(CFLAGS) isatt.c
clean:
	rm -fr *.o $(ISATT)
