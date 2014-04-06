CC=g++
CFLAGS=-c -Wall
EXIT_HANDLER=exit_handler

all: $(EXIT_HANDLER)

$(EXIT_HANDLER): exit_handler.o
	$(CC) exit_handler.o -o $(EXIT_HANDLER)

exit_handler.o: exit_handler.c
	$(CC) $(CFLAGS) exit_handler.c
clean:
	rm -fr *.o $(EXIT_HANDLER)
