CC=g++
CFLAGS=-c -Wall
SIMPLE_PIPE=simple_pipe

all: $(SIMPLE_PIPE)

$(SIMPLE_PIPE): simple_pipe.o
	$(CC) simple_pipe.o -o $(SIMPLE_PIPE)

simple_pipe.o: simple_pipe.c
	$(CC) $(CFLAGS) simple_pipe.c
clean:
	rm -fr *.o $(SIMPLE_PIPE)
