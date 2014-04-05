CC=g++
CFLAGS=-c -Wall
TMP_FILE=tmp_file

all: $(TMP_FILE)

$(TMP_FILE): tmp_file.o
	$(CC) tmp_file.o -o $(TMP_FILE)

tmp_file.o: tmp_file.c
	$(CC) $(CFLAGS) tmp_file.c
clean:
	rm -fr *.o $(TMP_FILE)
