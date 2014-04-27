CC=g++
CFLAGS=-c -Wall
CONN_ORI_CLIENT=conn_ori_client

all: $(CONN_ORI_CLIENT)

$(CONN_ORI_CLIENT): conn_ori_client.o
	$(CC) conn_ori_client.o -o $(CONN_ORI_CLIENT)

conn_ori_client.o: conn_ori_client.c
	$(CC) $(CFLAGS) conn_ori_client.c
clean:
	rm -fr *.o $(CONN_ORI_CLIENT)
