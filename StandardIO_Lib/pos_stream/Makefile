CC=g++
CFLAGS=-c -Wall
POS_STREAM=pos_stream

all: $(POS_STREAM)

$(POS_STREAM): pos_stream.o
	$(CC) pos_stream.o -o $(POS_STREAM)

pos_stream.o: pos_stream.c
	$(CC) $(CFLAGS) pos_stream.c
clean:
	rm -fr *.o $(POS_STREAM)
