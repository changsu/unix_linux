CC=cc
CFLAGS=-c -Wall
THREAD_TERM=thread_term

all: $(THREAD_TERM)

$(THREAD_TERM): thread_term.o
	$(CC) thread_term.o -o $(THREAD_TERM)

thread_term.o: thread_term.c
	$(CC) $(CFLAGS) thread_term.c
clean:
	rm -fr *.o $(THREAD_TERM)
