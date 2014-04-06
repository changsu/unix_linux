CC=g++
CFLAGS=-c -Wall
PRINT_RESOURCE=print_resource

all: $(PRINT_RESOURCE)

$(PRINT_RESOURCE): print_resource.o
	$(CC) print_resource.o -o $(PRINT_RESOURCE)

print_resource.o: print_resource.c
	$(CC) $(CFLAGS) print_resource.c
clean:
	rm -fr *.o $(PRINT_RESOURCE)
