/*********************************************************************/
/* Realisation d'une liste chainee dans un tableau                   */
/* ioannis.parissis@grenoble-inp.fr                                  */
/* Sep 2012                                                          */
/*********************************************************************/
#include "listeTableau.h"
#include <stdio.h>


int elementLibre(liste l) {
  int i=0;
  while(l[i].suivant != -1)
    i++;
  return i;
}

void initListe(liste l, int n) {
  int i;
  l[0].suivant = 0;
  for(i=1;i<n;i++) {
    l[i].suivant = -1;
  }
}


void insererElement(int x, liste l) {
  int newIndex, i;
  for(i=0;l[i].suivant!=0;i=l[i].suivant);
  newIndex = elementLibre(l);
  l[i].suivant = newIndex;
  l[newIndex].suivant = 0;
  l[newIndex].valeur = x;
}

void supprimerElement(int x, liste l) {
  int i, leftCell;
  if(l[l[0].suivant].valeur == x) {

  }
  for(i=0;l[i].suivant!=0;i=l[i].suivant) {
    if(l[l[i].suivant].valeur == x) {
      leftCell = l[l[i].suivant].suivant;
      l[l[i].suivant].suivant = -1;
      l[i].suivant = leftCell;
    }
  }
}

void afficherListe(liste l) {
  int i;
  printf("\n{");
  for(i=l[0].suivant;l[i].suivant!=0;i=l[i].suivant) {
    printf("%d, ", l[i].valeur);
  }
  printf("%d}", l[i].valeur);
}
