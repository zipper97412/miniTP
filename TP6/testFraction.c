#include <stdio.h>
#include "Fraction.h"


int main(int argc, char* argv[]) {
  Fraction fa, fb ;
  char op;
  printf("\nEntrer deux fractions (a/b c/d) :") ;
  scanf("%d/%d %d/%d", &fa.num, &fa.den, &fb.num, &fb.den) ;
  printf("Entrer une opération (+, -, /, *) :");
  scanf("\n%1c", &op);
  switch(op) {
    case '+':
      printf("\nLe resultat est : ");
      addFraction(fa, fb);
    break;
    case '_':
      printf("\nLe resultat est : ");
      subFraction(fa, fb);
    break;
    case '*':
      printf("\nLe resultat est : ");
      mulFraction(fa, fb);
    break;
    case '/':
      printf("\nLe resultat est : ");
      divFraction(fa, fb);
    break;
  }


  return 0;

}
