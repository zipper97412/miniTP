#include <stdio.h>
#include <stdlib.h>

void triHollande(int *tab, int len) {
  int i = 0, j = len-1, k = len-1, temp;
  while(i <= j) {
    if(tab[i] < 3) {
      i++;
    }
    if( (tab[i] >= 3) && (tab[i] <= 6) ) {
      temp = tab[i];
      tab[i] = tab[j];
      tab[j] = temp;
      j--;
    }
    if(tab[i] > 6) {
      temp = tab[i];
      tab[i] = tab[k];
      tab[k] = temp;
      temp = tab[i];
      tab[i] = tab[j];
      tab[j] = temp;
      j--;
      k--;
    }
  }
}

int main() {
  int tab[] = {5, 8, 1, 4, 3, 9, 2, 7, 3, 8, 1, 4, 5, 3, 8};
  int i;
  printf("\n");
  for(i=0;i<15;i++) {
    printf("%d, ", tab[i]);
  }
  printf("\n");
  triHollande(tab, 15);

  for(i=0;i<15;i++) {
    printf("%d, ", tab[i]);
  }
  printf("\n");
  return 0;
}
