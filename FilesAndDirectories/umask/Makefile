CC=g++
CFLAGS=-c -Wall
UMASK_FUNC=umask_func

all: $(UMASK_FUNC)

$(UMASK_FUNC): umask_func.o
	$(CC) umask_func.o -o $(UMASK_FUNC)

umask_func.o: umask_func.c
	$(CC) $(CFLAGS) umask_func.c
clean:
	rm -fr *.o $(UMASK_FUNC)
