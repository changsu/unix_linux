CC=g++
CFLAGS=-c -Wall
SINGLE_THREAD=single_thread

all: $(SINGLE_THREAD)

$(SINGLE_THREAD): single_thread.o
	$(CC) single_thread.o -o $(SINGLE_THREAD)

single_thread.o: single_thread.c
	$(CC) $(CFLAGS) single_thread.c
clean:
	rm -fr *.o $(SINGLE_THREAD)
