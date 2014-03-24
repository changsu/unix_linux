CC=g++
CFLAGS=-c -Wall
UTIME_TEST=utime_test

all: $(UTIME_TEST)

$(UTIME_TEST): utime_test.o
	$(CC) utime_test.o -o $(UTIME_TEST)

utime_test.o: utime_test.c
	$(CC) $(CFLAGS) utime_test.c
clean:
	rm -fr *.o $(UTIME_TEST)
