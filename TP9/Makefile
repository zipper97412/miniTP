


LDFLAGS= -g -lm
CFLAGS=-Wall -g
CC=gcc


testChainList: chainList.o testChainList.o
	$(CC) -o $@.bin $^ $(LDFLAGS)
	rm $^


%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm *.o *.bin
