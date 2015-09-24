
#ifndef FRACTION_H
#define FRACTION_H

typedef struct {
int num ; /* numérateur */
int den ; /* dénominateur */
} Fraction ;

void addFraction(Fraction f1, Fraction f2);
void subFraction(Fraction f1, Fraction f2);
void mulFraction(Fraction f1, Fraction f2);
void divFraction(Fraction f1, Fraction f2);
void reduction(Fraction *frac);
void display(Fraction frac);


#endif
