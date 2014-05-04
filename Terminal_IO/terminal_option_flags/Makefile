CC=g++
CFLAGS=-c -Wall
TERM_OPT_FLAGS=term_opt_flags

all: $(TERM_OPT_FLAGS)

$(TERM_OPT_FLAGS): term_opt_flags.o
	$(CC) term_opt_flags.o -o $(TERM_OPT_FLAGS)

term_opt_flags.o: term_opt_flags.c
	$(CC) $(CFLAGS) term_opt_flags.c
clean:
	rm -fr *.o $(TERM_OPT_FLAGS)
