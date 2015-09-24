#include "Fraction.h"
#include "pgcd.h"
#include <stdio.h>

void reduction(Fraction *frac) {
  int diviseur = pgcd(frac->num, frac->den);
  frac->num = frac->num/diviseur;
  frac->den = frac->den/diviseur;
  if( (frac->num < 0) && (frac->den < 0) ) {
    frac->num *= -1;
    frac->den *= -1;
  }
}

void display(Fraction frac) {
  printf("%d/%d\n", frac.num, frac.den);
}

void addFraction(Fraction f1, Fraction f2) {
  Fraction result;
  result.den = f1.den*f2.den;
  result.num = f1.num*f2.den + f2.num*f1.den;
  reduction(&result);
  display(result);

}
void subFraction(Fraction f1, Fraction f2) {
  Fraction result;
  result.den = f1.den*f2.den;
  result.num = f1.num*f2.den - f2.num*f1.den;
  reduction(&result);
  display(result);

}
void mulFraction(Fraction f1, Fraction f2) {
  Fraction result;
  result.den = f1.den*f2.den;
  result.num = f1.num*f2.num;
  reduction(&result);
  display(result);
}
void divFraction(Fraction f1, Fraction f2) {
  Fraction result;
  result.den = f1.den*f2.num;
  result.num = f1.num*f2.den;
  reduction(&result);
  display(result);
}
