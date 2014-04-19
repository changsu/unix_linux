CC=g++
CFLAGS=-c -Wall
THREAD_SIGNAL=thread_signal

all: $(THREAD_SIGNAL)

$(THREAD_SIGNAL): thread_signal.o
	$(CC) thread_signal.o -o $(THREAD_SIGNAL)

thread_signal.o: thread_signal.c
	$(CC) $(CFLAGS) thread_signal.c
clean:
	rm -fr *.o $(THREAD_SIGNAL)
