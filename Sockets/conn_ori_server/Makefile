CC=g++
CFLAGS=-c -Wall
CONN_ORI_SERVER=conn_ori_server

all: $(CONN_ORI_SERVER)

$(CONN_ORI_SERVER): conn_ori_server.o
	$(CC) conn_ori_server.o -o $(CONN_ORI_SERVER)

conn_ori_server.o: conn_ori_server.c
	$(CC) $(CFLAGS) conn_ori_server.c
clean:
	rm -fr *.o $(CONN_ORI_SERVER)
