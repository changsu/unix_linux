CC=g++
CFLAGS=-c -Wall
CHMOD_FCHMOD=chmod_fchmod

all: $(CHMOD_FCHMOD)

$(CHMOD_FCHMOD): chmod_fchmod.o
	$(CC) chmod_fchmod.o -o $(CHMOD_FCHMOD)

chmod_fchmod.o: chmod_fchmod.c
	$(CC) $(CFLAGS) chmod_fchmod.c
clean:
	rm -fr *.o $(CHMOD_FCHMOD)
