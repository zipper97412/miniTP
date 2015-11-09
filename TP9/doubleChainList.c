#include <stdio.h>
#include "doubleChainList.h" 


void afficherListeD(listeD *l) {
	elementD* cell;
	for(cell = (elementD*)(*l);cell != NULL;cell = cell->suivant) {
		printf("%d ",cell->valeur);
	}
	printf("\n");
}
void insererElementD(int x, listeD *l) {
	elementD* e;
	elementD* cell;
	if(( e = (elementD* ) malloc(sizeof(elementD)) ) == NULL) {
		perror("erreur malloc");
		exit(0);
	}
	e->valeur = x;
	if(*l == NULL) {
		e->suivant = NULL;
		e->precedent = NULL;
		*l = (listeD)e;
		return;
	}
	
	cell=(elementD*)(*l)
	while( (cell->suivant != NULL) && (cell->suivant->valeur < x)){
		cell = cell->suivant;
	}
	if(cell->suivant == NULL) {
		cell->suivant = e;
		e->suivant = NULL;
		e->precedent = cell;
	}
	else if (cell == (element*)(*l)) {
		e->suivant = cell;
		e->precedent = NULL;
		*l = e;
	}
	else
	{
		e->suivant = cell->suivant;
		cell->suivant = e;
		e->precedent = cell;
		e->suivant->precedent = e;
	}
}
void supprimerElementD(int i, listeD *l) {
	int k = 1;
	elementD* cell;
	elementD* temp;
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
