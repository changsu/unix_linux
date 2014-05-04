CC=g++
CFLAGS=-c -Wall
CHANGE_SPE_CHAR=change_spe_char

all: $(CHANGE_SPE_CHAR)

$(CHANGE_SPE_CHAR): change_spe_char.o
	$(CC) change_spe_char.o -o $(CHANGE_SPE_CHAR)

change_spe_char.o: change_spe_char.c
	$(CC) $(CFLAGS) change_spe_char.c
clean:
	rm -fr *.o $(CHANGE_SPE_CHAR)
