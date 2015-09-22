


LDFLAGS= -g -lm
CFLAGS=-Wall -g
CC=gcc


postfixe: postfixe.o pile.o
	$(CC) -o $@.bin $^ $(LDFLAGS)
	rm $^

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm *.o *.bin
