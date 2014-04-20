CC=g++
CFLAGS=-c -Wall
PUTMSG_CODE=putmsg_code

all: $(PUTMSG_CODE)

$(PUTMSG_CODE): putmsg_code.o
	$(CC) putmsg_code.o -o $(PUTMSG_CODE)

putmsg_code.o: putmsg_code.c
	$(CC) $(CFLAGS) putmsg_code.c
clean:
	rm -fr *.o $(PUTMSG_CODE)
