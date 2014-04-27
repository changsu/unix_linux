CC=g++
CFLAGS=-c -Wall
CONNLESS_SERVER=connless_server

all: $(CONNLESS_SERVER)

$(CONNLESS_SERVER): connless_server.o
	$(CC) connless_server.o -o $(CONNLESS_SERVER)

connless_server.o: connless_server.c
	$(CC) $(CFLAGS) connless_server.c
clean:
	rm -fr *.o $(CONNLESS_SERVER)
