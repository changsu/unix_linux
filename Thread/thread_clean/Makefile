CC=cc
CFLAGS=-c -Wall
THREAD_CLEAN=thread_clean

all: $(THREAD_CLEAN)

$(THREAD_CLEAN): thread_clean.o
	$(CC) thread_clean.o -o $(THREAD_CLEAN)

thread_clean.o: thread_clean.c
	$(CC) $(CFLAGS) thread_clean.c
clean:
	rm -fr *.o $(THREAD_CLEAN)
