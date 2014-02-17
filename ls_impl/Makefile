CC=g++
CFLAGS=-c -Wall
LS_IMPL=ls_impl

all: $(LS_IMPL)

$(LS_IMPL): ls_impl.o
	$(CC) ls_impl.o -o $(LS_IMPL)

ls_impl.o: ls_impl.c
	$(CC) $(CFLAGS) ls_impl.c
clean:
	rm -fr *.o $(LS_IMPL)
