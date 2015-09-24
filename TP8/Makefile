


LDFLAGS= -g -lm
CFLAGS=-Wall -g
CC=gcc


algoTri: algoTri.o
	$(CC) -o $@.bin $^ $(LDFLAGS)
	rm $^

mainPointeur: mainPointeur.o
	$(CC) -o $@.bin $^ $(LDFLAGS)
	rm $^

%.o: %.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean:
	rm *.o *.bin
