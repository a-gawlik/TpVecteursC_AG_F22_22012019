#include "vecteur.h"


//additionne les vecteurs A et B donnés en entrée pour donner un nouveau vecteur C en sortie
vecteur_2d addition_vectorielle_2d(const vecteur_2d vecA, const vecteur_2d vecB)
{
    vecteur_2d vecResultat;
    vecResultat.abs=vecA.abs+vecB.abs;
    vecResultat.ord=vecA.ord+vecB.ord;
    return vecResultat;
}


//Soustrait le vecteur B au vecteur A, donnés en entrée, pour donner un nouveau vecteur C en sortie
vecteur_2d soustraction_vectorielle_2d (const vecteur_2d vecA, const vecteur_2d vecB)
{
    vecteur_2d vecResultat;
    vecResultat.abs=vecA.abs-vecB.abs;
    vecResultat.ord=vecA.ord-vecB.ord;
    return vecResultat;
}


//Multiplie le vecteur A par un entier pour obtenir un nouveau vecteur B en sortie
vecteur_2d multiplication_scalaire_2d (const vecteur_2d vecA, const int nScalaire)
{
    vecteur_2d vecResultat;
    vecResultat.abs=vecA.abs*nScalaire;
    vecResultat.ord=vecA.ord*nScalaire;
    return vecResultat;
}


//Multiplie deux vecteurs A et B passés en entrée entre eux et donne le produit scalaire sous forme d'entier en sortie
int produit_scalaire_2d (const vecteur_2d vecA, const vecteur_2d vecB)
{
    //(x*x')+(y*y')
    int nProduit;
    nProduit=(vecA.abs*vecB.abs)+(vecA.ord*vecB.ord);
    return nProduit;
}


//Multiplie deux vecteurs entre eux selon la formule X = (y1*z2-z1*y2) / Y = (z1*x2)-(x1*z2) / Z = (x1*y2)-(y1*x2)
// Z n'existant pas dans ce plan en 2D, il n'est pas calculé
// z1,z2,z3 sont remplacés par la constante DIMENSION3 = 1
vecteur_2d produit_vectoriel (const vecteur_2d vecA, const vecteur_2d vecB)
{
    vecteur_2d vecResultat;
    vecResultat.abs=(vecA.ord*DIMENSION3)-(DIMENSION3*vecB.ord);
    vecResultat.ord=(DIMENSION3*vecB.abs)-(vecA.abs*DIMENSION3);
    return vecResultat;
}
