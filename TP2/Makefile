


LDFLAGS= -g -lm
CFLAGS=-Wall -g
CC=gcc

jeuMultiPoints: jeuMultiPoints.o
	$(CC) -o $@.bin $^ $(LDFLAGS)
	rm $^

jeuMulti: jeuMulti.o
	$(CC) -o $@.bin $^ $(LDFLAGS)
	rm $^

fibonacci: fibonacci.o
	$(CC) -o $@.bin $^ $(LDFLAGS)
	rm $^

factorielle: factorielle.o
	$(CC) -o $@.bin $^ $(LDFLAGS)
	rm $^

pgcd: pgcd.o
	$(CC) -o $@.bin $^ $(LDFLAGS)
	rm $^

%.o: %.c
	$(CC) -o $@ -c $^ $(CFLAGS)

clean:
	rm *.o *.bin
