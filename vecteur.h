#ifndef VECTEUR_H_INCLUDED
#define VECTEUR_H_INCLUDED
#define DIMENSION3 1

//Type structuré : vecteur

typedef struct vecteur_2d{
    int abs;
    int ord;
}vecteur_2d;

vecteur_2d addition_vectorielle_2d(const vecteur_2d vecA, const vecteur_2d vecB);
vecteur_2d soustraction_vectorielle_2d(const vecteur_2d vecA, const vecteur_2d vecB);
vecteur_2d multiplication_scalaire_2d (const vecteur_2d vecA, const int nScalaire);
int produit_scalaire_2d (const vecteur_2d vecA, const vecteur_2d vecB);
vecteur_2d produit_vectoriel (const vecteur_2d vecA, const vecteur_2d vecB);

#endif // VECTEUR_H_INCLUDED
