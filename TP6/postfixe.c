#include <stdio.h>
#include <stdlib.h>
#include "pile.h"


int postfixe(char* format) {
	int a, b;
	int i=0;
	pileInt stack = creerPile();
	
	while(format[i] != '\0') {
		switch(format[i]) {
			case '+':
				a = depiler(stack);
				b = depiler(stack);
				empiler(stack, b+a);
			break;
			case '-':
				a = depiler(stack);
				b = depiler(stack);
				empiler(stack, b-a);
			break;
			case 'x':
				a = depiler(stack);
				b = depiler(stack);
				empiler(stack, b*a);
			break;
			case '/':
				a = depiler(stack);
				b = depiler(stack);
				empiler(stack, b/a);
			break;
			default:
				empiler(stack, format[i] - 0x30);
			break;
		}
		i++;
	}
	return depiler(stack);
	
}


int main(int argc, char* argv[]) {

	printf("%s\n", argv[1]);	
	printf("le resultat est: %d\n", postfixe(argv[1]));


	return 0;
} 

