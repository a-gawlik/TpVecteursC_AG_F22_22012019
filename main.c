/* -------- CONSIGNES --------

Objectif du Tp, créer un programme nous permettant de manipuler des vecteurs 2 dimensions et de réaliser toutes les opérations usuelles possibles sur les vecteurs.

Créer la structure Vecteur
Créer les opérations usuelles sur vecteur :
addition vectorielle
soustraction vectorielle
multiplication d'un vecteur par un scalaire
produit scalaire de deux vecteurs
produit vectoriel de deux vecteurs

Attention "programmation modulaire"


----------------------------*/


#include <stdio.h>
#include <stdlib.h>
#include "vecteur.h"

int main()
{
    //Déclaration des variables de type vecteur_2d
    vecteur_2d vecA;
    vecteur_2d vecB;
    vecteur_2d vecC;
    int nEntier;

    //Valeurs du vecteur A
    vecA.abs=2;
    vecA.ord=-5;
    //Valeurs du vecteur B
    vecB.abs=3;
    vecB.ord=4;
    //Initialisation du vecteur C
    vecC.abs=0;
    vecC.ord=0;
    //Valeur de nEntier pour la multiplication scalaire
    nEntier=3;

    //Programme
    printf("vecteur A : %d / %d\n",vecA.abs,vecA.ord);
    printf("vecteur B : %d / %d\n\n",vecB.abs,vecB.ord);

    vecC=addition_vectorielle_2d(vecA,vecB);
    printf("apres addition : vecteur C : %d / %d\n\n",vecC.abs,vecC.ord);

    vecC=soustraction_vectorielle_2d(vecA,vecB);
    printf("apres soustraction (A-B) vecteur C : %d / %d\n\n",vecC.abs,vecC.ord);

    vecC=multiplication_scalaire_2d(vecA,nEntier);
    printf("apres multiplication scalaire du vecteur A par %d : %d / %d\n\n",nEntier,vecC.abs,vecC.ord);

    printf("produit scalaire de A et B : %d\n\n",produit_scalaire_2d(vecA,vecB));

    vecC=produit_vectoriel(vecA,vecB);
    printf("Produit vectoriel de A et B : %d / %d\n",vecC.abs,vecC.ord);

    return 0;
}
