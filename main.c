#include <stdio.h>
#include <stdlib.h>
#include "tp3.c"
#include "tp3.h"

int main()
{
    matrice_creuse *Matrice = malloc(size(matrice_creuse)); //allocation memoire pour matrice
    matrice_creuse Mat = *Matrice;
    int N = 3;
    int M=3;
    Mat.Nlignes=N;
    Mat.Ncolonnes = M;
    liste_ligne *ligne = malloc (N*size(liste_ligne)); //allocation memoire pour tableau de N lignes

    remplirMatrice(Matrice, N, M);
    afficherMatrice(Mat);
    return 0;
    printf("test");
}
