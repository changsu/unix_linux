CC=g++
CFLAGS=-c -Wall
DIR_TRAVERSE=dir_traverse

all: $(DIR_TRAVERSE)

$(DIR_TRAVERSE): dir_traverse.o
	$(CC) dir_traverse.o -o $(DIR_TRAVERSE)

dir_traverse.o: dir_traverse.c
	$(CC) $(CFLAGS) dir_traverse.c
clean:
	rm -fr *.o $(DIR_TRAVERSE)
