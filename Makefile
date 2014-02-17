CC=g++
CFLAGS=-c -Wall
TEST=test

all: $(TEST)

$(TEST): test.o
	$(CC) test.o -o $(TEST)

test.o: test.c
	$(CC) $(CFLAGS) test.c
clean:
	rm -fr *.o $(TEST)
