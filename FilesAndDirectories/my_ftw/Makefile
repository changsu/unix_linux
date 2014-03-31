CC=g++
CFLAGS=-c -Wall
MY_FTW=my_ftw

all: $(MY_FTW)

$(MY_FTW): my_ftw.o
	$(CC) my_ftw.o -o $(MY_FTW)

my_ftw.o: my_ftw.c
	$(CC) $(CFLAGS) my_ftw.c
clean:
	rm -fr *.o $(MY_FTW)
