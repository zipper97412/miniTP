#include <stdio.h>
#include "chainList.h"


int main() {
	
	liste maListe=NULL;
	int i;
	printf("\n------------------test de la liste simplement chaine------------------\n\n");
	
	printf("\nAjout d'éléments dans la liste:\n");
	for(i=9;i>=0;i--) {
		
		insererElement(i, &maListe);
		afficherListe(&maListe);
	}
	
	printf("Suppression du premier element de la liste (le 0):\n");
	supprimerElement(0, &maListe);
	afficherListe(&maListe);
	printf("Suppression du deuxième element de la liste (le 2):\n");
	supprimerElement(1, &maListe);
	afficherListe(&maListe);
	printf("Suppression du troisième element de la liste (le 4):\n");
	supprimerElement(2, &maListe);
	afficherListe(&maListe);
	printf("Suppression du quatrième element de la liste (le 6):\n");
	supprimerElement(3, &maListe);
	afficherListe(&maListe);
	printf("Suppression du dernier element de la liste (le 9):\n");
	supprimerElement(5, &maListe);
	afficherListe(&maListe);
	printf("Suppression d' un element qui n'existe pas (le 6 ième element de la liste):\n");
	supprimerElement(5, &maListe);
	afficherListe(&maListe);
	
	printf("\n------------------test de la liste doublement chaine------------------\n\n");
	return 0;
	
}
