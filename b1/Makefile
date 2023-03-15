CC=gcc
CFLAGS=-g -std=c11 -Wall -Wextra -pedantic -O0
CPRGS=quadriere

all: $(CPRGS)

quadriere: quadriere.o quad.o
	$(CC) $(CFLAGS) $^ -o $@

quad.o: quad.c quad.h
	$(CC) -c $(CFLAGS) $< -o $@
	
quadriere.o: quadriere.c quad.h
	$(CC) -c $(CFLAGS) $< -o $@

.SUFFIXES: .o .c .h
.PHONY: clean

clean:
	-/bin/rm -f *.o $(CPRGS)

