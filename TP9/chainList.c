#include <stdlib.h>
#include <stdio.h>
#include "chainList.h"


void afficherListe(liste *l) {
	element* cell;
	for(cell = (element*)(*l);cell != NULL;cell = cell->suivant) {
		printf("%d ",cell->valeur);
	}
	printf("\n");
}

void insererElement(int x, liste *l) {
	element* e;
	element* cell;
	if(( e = (element* ) malloc(sizeof(element)) ) == NULL) {
		perror("erreur malloc");
		exit(0);
	}
	e->valeur = x;
	if(*l == NULL) {
		e->suivant = NULL;
		*l = (liste)e;
		return;
	}
	cell = (element*)(*l); 
	while( (cell->suivant != NULL) && (cell->suivant->valeur < x) ){
		cell = cell->suivant;
	}
	if(cell->suivant == NULL) {
		cell->suivant = e;
		e->suivant = NULL;
	}
	else if (cell == (element*)(*l)) {
		e->suivant = cell;
		*l = e;
	}
	else {
		e->suivant = cell->suivant;
		cell->suivant = e;
	}
}

void supprimerElement(int i, liste *l) {
	int k = 1;
	element* cell;
	element* temp;
	if(*l == NULL) {
		return;
	}
	if(i == 0) {
		temp = (element*)(*l);
		*l = (liste)(temp->suivant);
		free(temp);
		return;
	}
	

	cell = (element*)(*l); 
	while(cell != NULL && k < i){
		cell = cell->suivant;
		k++;
	}	
	/* cell est le precedent de celui qu'il faut supprimer
           Si k==i on a trouvé */
	if (cell != NULL && cell->suivant != NULL){
		temp = cell->suivant;
		cell->suivant = temp->suivant;
		free(temp);	
	}
	else{ /* element supprime inexistant */
        }
}
