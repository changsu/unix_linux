CC=g++
CFLAGS=-c -Wall
WIN_SIZE=win_size

all: $(WIN_SIZE)

$(WIN_SIZE): win_size.o
	$(CC) win_size.o -o $(WIN_SIZE)

win_size.o: win_size.c
	$(CC) $(CFLAGS) win_size.c
clean:
	rm -fr *.o $(WIN_SIZE)
