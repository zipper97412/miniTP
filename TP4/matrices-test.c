#include <stdio.h>
#include "matrices.h"

#define MAXMATRIX
#define M 3
#define N 2

int main() {
  //j'ai choisi un tableau à 1 dimension pour stocker une matrice,
  //cela ajoute de la flexibilité et permet de stocker indépendemment des 
  //matrices MxN, NxM, et toute autre matrice avec autant de coef ou moins
  //Pour une matrice MxN , on accède au coef (x,y) de cette manière:
  //          coef = maMatrice[x + M*y]
  int result[M*N];
  int matrices[MAXMATRIX][M*N] = {
    {
      1,  0,  4,
      -1, 2,  -5
    },
    {
      2,  -3, 1,
      5,  8,  2
    },
    {
      0,  1,
      2,  -1,
      3,  4
    }
  };
  printf("affichage de 3 matrices:\n");
  afficherMatrice(matrices[0], M, N);
  afficherMatrice(matrices[1], M, N);
  afficherMatrice(matrices[2], N, M);
  printf("ajout de la matrice 1 et 2:\n");
  additionnerMatrices(matrices[0],matrices[1],result,M,N);
  afficherMatrice(result, M, N);
  printf("calcule de la transposée de 2\n");
  transpose(matrices[1],result,M,N);
  afficherMatrice(result, N, M);
  printf("calcule du produit matriciel de 1 par 3:\n");
  produitMatriciel(matrices[0],matrices[2],result,M,N);
  afficherMatrice(result, N, N); //ici on observe que result possède de la place inutilisé




  return 0;
}
