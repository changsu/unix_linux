CC=g++
CFLAGS=-c -Wall
SIMPLE_USER_SIG=simple_user_sig

all: $(SIMPLE_USER_SIG)

$(SIMPLE_USER_SIG): simple_user_sig.o
	$(CC) simple_user_sig.o -o $(SIMPLE_USER_SIG)

simple_user_sig.o: simple_user_sig.c
	$(CC) $(CFLAGS) simple_user_sig.c
clean:
	rm -fr *.o $(SIMPLE_USER_SIG)
