CC=g++
CFLAGS=-c -Wall
MUTEX_SIMPLE=mutex_simple

all: $(MUTEX_SIMPLE)

$(MUTEX_SIMPLE): mutex_simple.o
	$(CC) mutex_simple.o -o $(MUTEX_SIMPLE)

mutex_simple.o: mutex_simple.c
	$(CC) $(CFLAGS) mutex_simple.c
clean:
	rm -fr *.o $(MUTEX_SIMPLE)
