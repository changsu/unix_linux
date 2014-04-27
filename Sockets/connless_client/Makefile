CC=g++
CFLAGS=-c -Wall
CONNLESS_CLIENT=connless_client

all: $(CONNLESS_CLIENT)

$(CONNLESS_CLIENT): connless_client.o
	$(CC) connless_client.o -o $(CONNLESS_CLIENT)

connless_client.o: connless_client.c
	$(CC) $(CFLAGS) connless_client.c
clean:
	rm -fr *.o $(CONNLESS_CLIENT)
