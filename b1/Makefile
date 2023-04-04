CC=gcc
CPP=g++
CFLAGS=-g -std=c11 -Wall -Wextra -pedantic -O0
CPPFLAGS =-g -std=c++14 -Wall -pedantic -O0 
CPRGS=quadriere.bin wurzele.bin sortzahlen.bin cmdq.bin test_cmdq.bin


all: $(CPRGS)

sortzahlen.bin: sortzahlen.c
	$(CC) $(CFLAGS) $^ -o $@

wurzele.bin : wurzele.c lib.o
	$(CC) $(CFLAGS) $^ -o $@


quadriere.bin: quadriere.o quad.o
	$(CC) $(CFLAGS) $^ -o $@
	
cmdq.bin: cmdq.o queue.o
	$(CC) $(CFLAGS) $^ -o $@
	
test_cmdq.bin: queue.o
	$(CPP) -c $(CPPFLAGS) test_cmdq.c -o test_cmdq.o
	$(CPP) $(CPPFLAGS) test_cmdq.o $^ -pthread -lgtest -lgtest_main -o test_$@
	
	

%.o : %c
	$(CC) -c $(CFLAGS) $< -o $@

.SUFFIXES: .o .c .h
.PHONY: clean

clean:
	-/bin/rm -f *.o $(CPRGS)

