CC=gcc --std=c99 -g

all: test

test: test.c core.o
	$(CC) test.c core.o -o test

core.o: core.c core.h
	$(CC) -c core.c

clean:
	rm -f *.o test