


LDFLAGS= -g -lm
CFLAGS=-Wall -g
CC=gcc

testFraction: testFraction.o Fraction.o pgcd.o
	$(CC) -o $@.bin $^ $(LDFLAGS)
	rm $^

testListe: listeTableau.o testListe.o
	$(CC) -o $@.bin $^ $(LDFLAGS)
	rm $^

postfixe: postfixe.o pile.o
	$(CC) -o $@.bin $^ $(LDFLAGS)
	rm $^

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm *.o *.bin
