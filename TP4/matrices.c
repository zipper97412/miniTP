#include "matrices.h"
#include <stdio.h>

void afficherMatrice(int* matrix, int m, int n) {
  int x, y;
  for(y=0;y<n;y++){
    printf("\t|\t");
    for(x=0;x<m;x++){
      printf(" %d ", matrix[x + m*y]);
    }
    printf("\t|\n");
  }
  printf("\n");
}

void additionnerMatrices(int* matrix1, int* matrix2, int* result, int m, int n) {
  int i;
  for(i=0;i<m*n;i++) {
    result[i] = matrix1[i] + matrix2[i];
  }
}
void transpose(int* matrix, int* result, int m, int n) {
  int x,y;
  for(y=0;y<n;y++) {
    for(x=0;x<m;x++) {
      result[y + n*x] = matrix[x + m*y];
    }
  }
}

void produitMatriciel(int* matrix1, int* matrix2, int* result, int m, int n) {
  int x,y,i;
  int sum;
  for(y=0;y<n;y++) {
    for(x=0;x<n;x++) {
      sum=0;
      for(i=0;i<m;i++) {
        //faire un schéma est conseillé pour la ligne suivante...
        sum += matrix1[i + m*y]*matrix2[x + n*i];
      }
      result[x + n*y] = sum;
    }
  }
}
