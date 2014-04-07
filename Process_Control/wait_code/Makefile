CC=g++
CFLAGS=-c -Wall
WAIT_CODE=wait_code

all: $(WAIT_CODE)

$(WAIT_CODE): wait_code.o
	$(CC) wait_code.o -o $(WAIT_CODE)

wait_code.o: wait_code.c
	$(CC) $(CFLAGS) wait_code.c
clean:
	rm -fr *.o $(WAIT_CODE)
