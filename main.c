#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tp3.c"
#include "tp3.h"

int main()
{
    matrice_creuse *Matrice = malloc(sizeof(matrice_creuse)); //allocation memoire pour matrice
    matrice_creuse Mat = *Matrice;
    int N = 3;
    int M=3;
    Mat.Nlignes=N;
    Mat.Ncolonnes = M;
    Mat.tab_lignes = malloc(N*sizeof(liste_ligne));
    //liste_ligne *ligne = malloc (N*sizeof(liste_ligne)); //allocation memoire pour tableau de N lignes
    remplirMatrice(Matrice, N, M);
    afficherMatrice(Mat);



    return 0;
}