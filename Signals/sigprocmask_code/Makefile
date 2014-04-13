CC=g++
CFLAGS=-c -Wall
SIGPROCMASK_CODE=sigprocmask_code

all: $(SIGPROCMASK_CODE)

$(SIGPROCMASK_CODE): sigprocmask_code.o
	$(CC) sigprocmask_code.o -o $(SIGPROCMASK_CODE)

sigprocmask_code.o: sigprocmask_code.c
	$(CC) $(CFLAGS) sigprocmask_code.c
clean:
	rm -fr *.o $(SIGPROCMASK_CODE)
