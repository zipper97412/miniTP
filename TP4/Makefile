


LDFLAGS= -g -lm
CFLAGS=-Wall -g
CC=gcc


runme: tests.o main.o
	$(CC) -o $@.bin $< $(LDFLAGS)
	./runme

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm *.o *.bin
