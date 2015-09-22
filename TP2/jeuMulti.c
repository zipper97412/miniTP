#include <stdio.h>

int getNumber() {
  int number=-1, c;
  while( number < 0 ) {

    scanf("%d", &number);
    while((c=getchar()) != EOF && c != '\n');
  }
  return number;
}

int main() {
  int table, i=1, r;
  printf("\nchoisissez une table de multiplication entre 2 et 9\n");
  while( ((table=getNumber()) < 2) || (table > 9) ) {
    printf("Erreur, veillez choisir un nombre entre 2 et 9\n");
  }
  printf("vous avez choisi la table %d\n\n", table);
  while(i<10) {
    printf("%d X %d = ", i, table);
    r=getNumber();
    if(r != i*table) {
      printf("FAUX retournez à la maternelle! la réponse était : %d !\n", i*table);
      exit(0);
    }
    i++;
  }
  printf("bravo! tu as ton Bac");

  return 0;
}
