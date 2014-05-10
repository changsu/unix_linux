CC=g++
CFLAGS=-c -Wall
CREATE_WRITE=create_write

all: $(CREATE_WRITE)

$(CREATE_WRITE): create_write.o
	$(CC) create_write.o -o $(CREATE_WRITE)

create_write.o: create_write.c
	$(CC) $(CFLAGS) create_write.c
clean:
	rm -fr *.o $(CREATE_WRITE)
