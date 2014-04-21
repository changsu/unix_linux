CC=g++
CFLAGS=-c -Wall
PIPE_LC_APP=pipe_lc_app
TO_LC=to_lc

all: $(PIPE_LC_APP) $(TO_LC)

$(TO_LC): to_lc.o
	$(CC) to_lc.o -o $(TO_LC)

to_lc.o: to_lc.c
	$(CC) $(CFLAGS) to_lc.c

$(PIPE_LC_APP): pipe_lc_app.o
	$(CC) pipe_lc_app.o -o $(PIPE_LC_APP)

pipe_lc_app.o: pipe_lc_app.c
	$(CC) $(CFLAGS) pipe_lc_app.c
clean:
	rm -fr *.o $(PIPE_LC_APP) $(TO_LC)
