CC=g++
CFLAGS=-c -Wall
ALARM_CODE=alarm_code

all: $(ALARM_CODE)

$(ALARM_CODE): alarm_code.o
	$(CC) alarm_code.o -o $(ALARM_CODE)

alarm_code.o: alarm_code.c
	$(CC) $(CFLAGS) alarm_code.c
clean:
	rm -fr *.o $(ALARM_CODE)
