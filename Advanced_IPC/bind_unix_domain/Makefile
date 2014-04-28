CC=g++
CFLAGS=-c -Wall
BIND_UNIX_DOMAIN=bind_unix_domain

all: $(BIND_UNIX_DOMAIN)

$(BIND_UNIX_DOMAIN): bind_unix_domain.o
	$(CC) bind_unix_domain.o -o $(BIND_UNIX_DOMAIN)

bind_unix_domain.o: bind_unix_domain.c
	$(CC) $(CFLAGS) bind_unix_domain.c
clean:
	rm -fr *.o $(BIND_UNIX_DOMAIN)
