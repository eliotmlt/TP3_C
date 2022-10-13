#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tp3.h"


// Fonction qui permet de créer un élement d'une liste chaînée
// Params : indice de colonne (int), valeur de l'élement (int)
// Return : pointeur vers le nouvele élement créé
element *creerElement(int colonne, int valeur) {
    element *nouvelElement = malloc(sizeof(element)); //allocation de la memoire pour nouvel element
    nouvelElement->col = colonne;
    nouvelElement->val = valeur;
    nouvelElement->suivant = NULL; //fin de la liste chainee
    return nouvelElement;

}


void remplirMatrice(matrice_creuse *m, int N, int M) {

    int i=0, j=0, temp=0;
    liste_ligne *ligne = m->tab_lignes;
    element *dernier = NULL; //pointeur sur element
    for (i=0;i<N;i++)
    {
        dernier = *(ligne+i); //valeur à la case i
        for (j=0;j<M;j++)
        {
            printf("\n entrer entier matrice %d , %d \n", i+1, j+1);
            scanf("%d", &temp);
            if (temp != 0)
            {
                new = creerElement(j, temp);
                *dernier= new; //on associe au poitneur suivant du denrier element l'adresse du nouveau
                dernier = new->suivant;
            }
        }
    }
}


void afficherMatrice(matrice_creuse m){
    int n=matrice_creuse.Nlignes, m=matrice_creuse.Ncolonnes; //n nb lignes, m nb col
    int i=0,j=0;
    element *current = NULL; //initialise un pointeur sur un element
    liste_ligne *ligne = matrice_creuse.tab_lignes; //on recupere la liste des lignes : pointeur sur premiere ligne
    for (i=0;i<n;i++)
    {
        current = *(ligne+i);
        for(j=0;j<m;j++)
        {
            if (current->col == j) //si colonne existe
            {
                printf(" %d ", current->val);
            }
            else {
                printf(" 0 ");
            }
        }
        printf("\n");
    }
}

void afficherMatriceListes(matrice_creuse m) {

  /*Ecrire ici le code de cette fonction*/

}


int rechercherValeur(matrice_creuse m, int i, int j) {

  /*Ecrire ici le code de cette fonction*/

}


void affecterValeur(matrice_creuse m, int i, int j, int val) {

  /*Ecrire ici le code de cette fonction*/

}


void additionerMatrices(matrice_creuse m1, matrice_creuse m2) {

  /*Ecrire ici le code de cette fonction*/

}


int nombreOctetsGagnes(matrice_creuse m) {

  /*Ecrire ici le code de cette fonction*/

}

