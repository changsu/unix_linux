CC=g++
CFLAGS=-c -Wall
ACCESS_TEST=access_test

all: $(ACCESS_TEST)

$(ACCESS_TEST): access_test.o
	$(CC) access_test.o -o $(ACCESS_TEST)

access_test.o: access_test.c
	$(CC) $(CFLAGS) access_test.c
clean:
	rm -fr *.o $(ACCESS_TEST)
