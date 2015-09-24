


LDFLAGS= -g -lm
CFLAGS=-Wall -g
CC=gcc


stats: tests.o main.o
	$(CC) -o $@.bin $^ $(LDFLAGS)
	rm $^

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm *.o *.bin
