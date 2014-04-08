CC=g++
CFLAGS=-c -Wall
SYSTEM_CODE=system_code

all: $(SYSTEM_CODE)

$(SYSTEM_CODE): system_code.o
	$(CC) system_code.o -o $(SYSTEM_CODE)

system_code.o: system_code.c
	$(CC) $(CFLAGS) system_code.c
clean:
	rm -fr *.o $(SYSTEM_CODE)
