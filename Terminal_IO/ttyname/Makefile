CC=g++
CFLAGS=-c -Wall
TTYNAME=ttyname

all: $(TTYNAME)

$(TTYNAME): ttyname.o
	$(CC) ttyname.o -o $(TTYNAME)

ttyname.o: ttyname.c
	$(CC) $(CFLAGS) ttyname.c
clean:
	rm -fr *.o $(TTYNAME)
