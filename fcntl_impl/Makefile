CC=g++
CFLAGS=-c -Wall
FCNTL_IMPL=fcntl_impl

all: $(FCNTL_IMPL)

$(FCNTL_IMPL): fcntl_impl.o
	$(CC) fcntl_impl.o -o $(FCNTL_IMPL)

fcntl_impl.o: fcntl_impl.c
	$(CC) $(CFLAGS) fcntl_impl.c
clean:
	rm -fr *.o $(FCNTL_IMPL)
