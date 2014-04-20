CC=g++
CFLAGS=-c -Wall
GETMSG_CODE=getmsg_code

all: $(GETMSG_CODE)

$(GETMSG_CODE): getmsg_code.o
	$(CC) getmsg_code.o -o $(GETMSG_CODE)

getmsg_code.o: getmsg_code.c
	$(CC) $(CFLAGS) getmsg_code.c
clean:
	rm -fr *.o $(GETMSG_CODE)
