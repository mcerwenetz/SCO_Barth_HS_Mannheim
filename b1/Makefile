CC=gcc
CFLAGS=-g -std=c11 -Wall -Wextra -pedantic -O0
CPRGS=quadriere.bin wurzele.bin sortzahlen.bin cmdq.bin


all: $(CPRGS)

sortzahlen.bin: sortzahlen.c
	$(CC) $(CFLAGS) $^ -o $@

wurzele.bin : wurzele.c lib.o
	$(CC) $(CFLAGS) $^ -o $@


quadriere.bin: quadriere.o quad.o
	$(CC) $(CFLAGS) $^ -o $@
	
cmdq.bin: cmdq.o queue.o
	$(CC) $(CFLAGS) $^ -o $@


%.o : %c
	$(CC) -c $(CFLAGS) $< -o $@

.SUFFIXES: .o .c .h
.PHONY: clean

clean:
	-/bin/rm -f *.o $(CPRGS)

