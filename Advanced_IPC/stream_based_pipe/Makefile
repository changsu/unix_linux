CC=g++
CFLAGS=-c -Wall
STREAM_BASED_PIPE=stream_based_pipe

all: $(STREAM_BASED_PIPE)

$(STREAM_BASED_PIPE): stream_based_pipe.o
	$(CC) stream_based_pipe.o -o $(STREAM_BASED_PIPE)

stream_based_pipe.o: stream_based_pipe.c
	$(CC) $(CFLAGS) stream_based_pipe.c
clean:
	rm -fr *.o $(STREAM_BASED_PIPE)
