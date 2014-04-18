CC=g++
CFLAGS=-c -Wall
THREAD_ATTRI=thread_attri

all: $(THREAD_ATTRI)

$(THREAD_ATTRI): thread_attri.o
	$(CC) thread_attri.o -o $(THREAD_ATTRI)

thread_attri.o: thread_attri.c
	$(CC) $(CFLAGS) thread_attri.c
clean:
	rm -fr *.o $(THREAD_ATTRI)
