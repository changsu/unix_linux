CC=g++
CFLAGS=-c -Wall
ADDRINFO=addrinfo

all: $(ADDRINFO)

$(ADDRINFO): addrinfo.o
	$(CC) addrinfo.o -o $(ADDRINFO)

addrinfo.o: addrinfo.c
	$(CC) $(CFLAGS) addrinfo.c
clean:
	rm -fr *.o $(ADDRINFO)
