#include <stdio.h>
#include <stdlib.h>
#include "listeTableau.h"


int main() {
  element tab[MAXCELL];
  printf("\ninitialisation de la liste avec le nombre maximum d'éléments : %d\n", MAXCELL-1);
  initListe(tab, MAXCELL);
  int i;
  printf("\ninsertion des éléments 1 à 7\n");
  for(i=1;i<8;i++) {
    insererElement(i, tab);
  }
  afficherListe(tab);
  printf("\nsuperssion du 5\n");
  supprimerElement(5, tab);
  afficherListe(tab);
  printf("\ninsertion de l'élément 8\n");
  insererElement(8, tab);
  afficherListe(tab);
  printf("\nré-initialisation de la liste avec 6 emplacements\n");
  initListe(tab, 7);
  afficherListe(tab);
  printf("\ninsertion de 4 éléments\n");
  for(i=1;i<5;i++) {
    insererElement(i, tab);
  }
  afficherListe(tab);
  printf("\nverifiez si tout est correct \nFIN\n");


  return 0;
}
