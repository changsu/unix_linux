CC=g++
CFLAGS=-c -Wall
UNLINK_TEST=unlink_test

all: $(UNLINK_TEST)

$(UNLINK_TEST): unlink_test.o
	$(CC) unlink_test.o -o $(UNLINK_TEST)

unlink_test.o: unlink_test.c
	$(CC) $(CFLAGS) unlink_test.c
clean:
	rm -fr *.o $(UNLINK_TEST)
