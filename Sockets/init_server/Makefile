CC=g++
CFLAGS=-c -Wall
INIT_SERVER=init_server

all: $(INIT_SERVER)

$(INIT_SERVER): init_server.o
	$(CC) init_server.o -o $(INIT_SERVER)

init_server.o: init_server.c
	$(CC) $(CFLAGS) init_server.c
clean:
	rm -fr *.o $(INIT_SERVER)
