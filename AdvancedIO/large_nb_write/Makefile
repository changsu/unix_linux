CC=g++
CFLAGS=-c -Wall
LARGE_NB_WRITE=large_nb_write

all: $(LARGE_NB_WRITE)

$(LARGE_NB_WRITE): large_nb_write.o
	$(CC) large_nb_write.o -o $(LARGE_NB_WRITE)

large_nb_write.o: large_nb_write.c
	$(CC) $(CFLAGS) large_nb_write.c
clean:
	rm -fr *.o $(LARGE_NB_WRITE)
