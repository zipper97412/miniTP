


LDFLAGS= -g -lm
CFLAGS=-Wall -g
CC=gcc


stats: stats.o stats-test.o
	$(CC) -o $@.bin $^ $(LDFLAGS)
	rm $^

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm *.o *.bin
