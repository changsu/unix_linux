CC=g++
CFLAGS=-c -Wall
TEST_STREAM=test_stream

all: $(TEST_STREAM)

$(TEST_STREAM): test_stream.o
	$(CC) test_stream.o -o $(TEST_STREAM)

test_stream.o: test_stream.c
	$(CC) $(CFLAGS) test_stream.c
clean:
	rm -fr *.o $(TEST_STREAM)
