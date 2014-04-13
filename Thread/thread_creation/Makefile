CC=g++
CFLAGS=-c -Wall
THREAD_CREATION=thread_creation

all: $(THREAD_CREATION)

$(THREAD_CREATION): thread_creation.o
	$(CC) thread_creation.o -o $(THREAD_CREATION)

thread_creation.o: thread_creation.c
	$(CC) $(CFLAGS) thread_creation.c
clean:
	rm -fr *.o $(THREAD_CREATION)
