CC=g++
CFLAGS=-c -Wall
ERROR_EXP=error_exp

all: $(ERROR_EXP)

$(ERROR_EXP): error_exp.o
	$(CC) error_exp.o -o $(ERROR_EXP)

error_exp.o: error_exp.c
	$(CC) $(CFLAGS) error_exp.c
clean:
	rm -fr *.o $(ERROR_EXP)
