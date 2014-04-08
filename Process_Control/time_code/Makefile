CC=g++
CFLAGS=-c -Wall
TIME_CODE=time_code

all: $(TIME_CODE)

$(TIME_CODE): time_code.o
	$(CC) time_code.o -o $(TIME_CODE)

time_code.o: time_code.c
	$(CC) $(CFLAGS) time_code.c
clean:
	rm -fr *.o $(TIME_CODE)
