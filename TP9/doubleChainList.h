#ifndef DOUBLECHAINLIST_H
#define DOUBLECHAINLIST_H

typedef struct elementD elementD
struct elementD{
	int valeur ; /* valeur de l’élément */
	elementD* suivant ; /* adresse du successeur */
	elementD* precedent ; /* adresse du prédécesseur */
};
typedef elementD* listeD ;

void afficherListeD(listeD *l);
void insererElementD(int x, listeD *l);
void supprimerElementD(int i, listeD *l);

#endif

