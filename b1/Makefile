CC=gcc
CFLAGS=-g -std=c11 -Wall -Wextra -pedantic -O0
CPRGS=quadriere.bin wurzele.bin

all: $(CPRGS)

wurzele.bin : wurzele.c lib.o
	$(CC) $(CFLAGS) $^ -o $@

lib.o : lib.c lib.h
	$(CC) -c $(CFLAGS) $< -o $@

quadriere.bin: quadriere.o quad.o
	$(CC) $(CFLAGS) $^ -o $@

quad.o: quad.c quad.h
	$(CC) -c $(CFLAGS) $< -o $@
	
quadriere.o: quadriere.c quad.h
	$(CC) -c $(CFLAGS) $< -o $@

.SUFFIXES: .o .c .h
.PHONY: clean

clean:
	-/bin/rm -f *.o $(CPRGS)

