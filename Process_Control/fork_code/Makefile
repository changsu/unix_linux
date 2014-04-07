CC=g++
CFLAGS=-c -Wall
FORK_CODE=fork_code

all: $(FORK_CODE)

$(FORK_CODE): fork_code.o
	$(CC) fork_code.o -o $(FORK_CODE)

fork_code.o: fork_code.c
	$(CC) $(CFLAGS) fork_code.c
clean:
	rm -fr *.o $(FORK_CODE)
