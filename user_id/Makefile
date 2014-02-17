CC=g++
CFLAGS=-c -Wall
USER_ID=user_id

all: $(USER_ID)

$(USER_ID): user_id.o
	$(CC) user_id.o -o $(USER_ID)

user_id.o: user_id.c
	$(CC) $(CFLAGS) user_id.c
clean:
	rm -fr *.o $(USER_ID)
