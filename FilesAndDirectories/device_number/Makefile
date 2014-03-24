CC=g++
CFLAGS=-c -Wall
DEVICE=device

all: $(DEVICE)

$(DEVICE): device.o
	$(CC) device.o -o $(DEVICE)

device.o: device.c
	$(CC) $(CFLAGS) device.c
clean:
	rm -fr *.o $(DEVICE)
