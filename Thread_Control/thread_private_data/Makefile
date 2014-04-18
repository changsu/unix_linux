CC=g++
CFLAGS=-c -Wall
THREAD_DATA=thread_data

all: $(THREAD_DATA)

$(THREAD_DATA): thread_data.o
	$(CC) thread_data.o -o $(THREAD_DATA)

thread_data.o: thread_data.c
	$(CC) $(CFLAGS) thread_data.c
clean:
	rm -fr *.o $(THREAD_DATA)
