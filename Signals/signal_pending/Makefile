CC=g++
CFLAGS=-c -Wall
SIGNAL_PENDING=signal_pending

all: $(SIGNAL_PENDING)

$(SIGNAL_PENDING): signal_pending.o
	$(CC) signal_pending.o -o $(SIGNAL_PENDING)

signal_pending.o: signal_pending.c
	$(CC) $(CFLAGS) signal_pending.c
clean:
	rm -fr *.o $(SIGNAL_PENDING)
