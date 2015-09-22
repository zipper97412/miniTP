


LDFLAGS= -g -lm
CFLAGS=-Wall -O -g
CC=gcc


fibonacci: fibonacci.o
	$(CC) -o $@.bin $< $(LDFLAGS)

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm *.o *.bin
