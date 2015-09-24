#include <stdio.h>


int fibonacci(int n) {
	if (n < 2) {
		return n;
	}
	else {
		return ( fibonacci(n-1)+fibonacci(n-2) );
	}
	
}

int main() {
	
	int number;
	printf("Suite de Fibonacci\nchoisissez un nombre :\n");
	scanf("%d", &number);
	printf("\nLe terme correspondant est: %d\n", fibonacci(number));
	
	return 0;
}
