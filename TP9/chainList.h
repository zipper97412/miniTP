#ifndef CHAINLIST_H
#define CHAINLIST_H

typedef struct element element;
struct element {
	int valeur ;
	struct element* suivant ;
};

typedef element* liste ;


void afficherListe(liste *l);
void insererElement(int x, liste *l);
void supprimerElement(int i, liste *l);

#endif
