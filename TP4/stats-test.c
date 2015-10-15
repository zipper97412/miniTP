#include <stdio.h>
#include "stats.h"
#define RECHERCHE 14.7

int main() {

  float* data = dataSets[0];
  afficherNotes(data, MAXDATA);
  printf("\nle minimum est : %f\n", minimumNote(data, MAXDATA));
  printf("le maximum est : %f\n", maximumNote(data, MAXDATA));
  printf("la moyenne est : %f\n", calculeMoyenne(data, MAXDATA));
  printf("la variance est : %f\n", calculeVariance(data, MAXDATA));
  printf("l' ecart type est : %f\n", calculeEcartType(data, MAXDATA));
  printf("Recherch de la position du premier %f (0 si introuvable) : %d\n", RECHERCHE, 1+rechercherValeur(data, MAXDATA, RECHERCHE));
  return 0;
}
