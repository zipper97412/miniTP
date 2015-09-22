


LDFLAGS= -g -lm
CFLAGS=-Wall -g
CC=gcc

jeuMultiPoints: jeuMultiPoints.o
	$(CC) -o $@.bin $< $(LDFLAGS)

jeuMulti: jeuMulti.o
	$(CC) -o $@.bin $< $(LDFLAGS)

fibonacci: fibonacci.o
	$(CC) -o $@.bin $< $(LDFLAGS)

factorielle: factorielle.o
	$(CC) -o $@.bin $< $(LDFLAGS)

pgcd: pgcd.o
	$(CC) -o $@.bin $< $(LDFLAGS)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm *.o *.bin
