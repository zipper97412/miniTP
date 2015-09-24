#include <stdio.h>

int pgcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	if (a == 0) {
		return b;
	}
	
	return ( pgcd(b, a%b) );
	
}
int main() {
	
	int a, b;
	printf("Calculer un PGCD(a, b) choisissez a :\n");
	scanf("%d", &a);
	printf("\nchoisissez b :\n");
	scanf("%d", &b);
	printf("\nLe le PGCD est: %d\n", pgcd(a, b));
	
	return 0;
}

/* exemples de test:
(1612, 26156) -> 52 
(6,0) -> 6
(0,6) -> 6

*/
