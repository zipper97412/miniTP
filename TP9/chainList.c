#include <stdlib.h>
#include <stdio.h>
#include "chainList.h"


void afficherListe(liste *l) {
	element* cell;
	for(cell = (element*)l;cell != NULL;cell = cell->suivant) {
		printf("%d ",cell->valeur);
	}
	printf("\n");
}

void insererElement(int x, liste *l) {
	element* e;
	if(( e = (element* ) malloc(sizeof(element)) ) == NULL) {
		perror("erreur malloc");
		exit(0);
	}
	e->suivant = (element*)l;
	l = (liste)e;	
}

void supprimerElement(int i, liste *l) {
	int k = 0;
	element* cell;
	element* temp;
	if(l == NULL) {
		return;
	}
	if(i == 0) {
		temp = l;
		l = temp->suivant;
		free(temp);
		return;
	}
		
	for(cell = (element*)l;cell != NULL;cell = cell->suivant) {
		if (k == i-1) {
			temp = cell->suivant;
			cell->suivant = cell->suivant->suivant;
			free(temp);
			return;
		}
	}
}
