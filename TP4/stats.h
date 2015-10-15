#ifndef TESTS_H
#define TESTS_H

#define MAXDATA 5
#define MAXSET 3


float dataSets[MAXSET][MAXDATA];
void afficherNotes(float* data, int len);
float minimumNote(float* data, int len);
float maximumNote(float* data, int len);
float calculeMoyenne(float* data, int len);
float calculeVariance(float* data, int len);
float calculeEcartType(float* data, int len);
int rechercherValeur(float* data, int len, float item);

#endif
