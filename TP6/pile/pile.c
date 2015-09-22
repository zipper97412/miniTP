#include "pile.h"

/* R�alisation TRES SIMPLE d'une pile d'entiers
   Ne v�rifie pas les d�bordements
*/

pileInt creerPile(){
    pileInt p = (pileInt) malloc(sizeof(sPileInt));
    p->pp = 0;

}

int estPileVide(pileInt p){
    return (p->pp == 0);
};
void empiler(pileInt p, int x){
    p->pp++;
    p->pile[p->pp] = x;
};
int depiler(pileInt p){
    return(p->pile[p->pp--]);
};
