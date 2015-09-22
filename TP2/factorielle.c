#include <stdio.h>

int factorielle(int n) {
	if(n <= 0) {
		return 1;
	}
	else {
		return n*factorielle(n-1);
	}
}

int factorielleBis(int m) {
	int k, i=0;
	while( (k=factorielle(i)) < m )
		i++;
	return(i);
}

int main() {

	int n, m;
	printf("Calculer !n choisissez n :\n");
	scanf("%d", &n);
	m = factorielle(n);
	printf("\n!n : %d\n", m);
	printf("calcul de factorielleBis avec m = %d\nLe resultat est :%d",m ,factorielleBis(m));

	return 0;
}
