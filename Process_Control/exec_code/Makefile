CC=g++
CFLAGS=-c -Wall
EXEC_CODE=exec_code

all: $(EXEC_CODE)

$(EXEC_CODE): exec_code.o
	$(CC) exec_code.o -o $(EXEC_CODE)

exec_code.o: exec_code.c
	$(CC) $(CFLAGS) exec_code.c
clean:
	rm -fr *.o $(EXEC_CODE)
