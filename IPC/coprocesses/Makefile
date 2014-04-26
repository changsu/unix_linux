CC=g++
CFLAGS=-c -Wall
PARENT_PROG=parent_prog

all: $(PARENT_PROG)

$(PARENT_PROG): parent_prog.o
	$(CC) parent_prog.o -o $(PARENT_PROG)

parent_prog.o: parent_prog.c
	$(CC) $(CFLAGS) parent_prog.c
clean:
	rm -fr *.o $(PARENT_PROG)
