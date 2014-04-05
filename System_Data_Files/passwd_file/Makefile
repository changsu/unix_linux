CC=g++
CFLAGS=-c -Wall
PASSWD_FILE=passwd_file

all: $(PASSWD_FILE)

$(PASSWD_FILE): passwd_file.o
	$(CC) passwd_file.o -o $(PASSWD_FILE)

passwd_file.o: passwd_file.c
	$(CC) $(CFLAGS) passwd_file.c
clean:
	rm -fr *.o $(PASSWD_FILE)
