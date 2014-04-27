CC=g++
CFLAGS=-c -Wall
SOCK_CONN=sock_conn

all: $(SOCK_CONN)

$(SOCK_CONN): sock_conn.o
	$(CC) sock_conn.o -o $(SOCK_CONN)

sock_conn.o: sock_conn.c
	$(CC) $(CFLAGS) sock_conn.c
clean:
	rm -fr *.o $(SOCK_CONN)
