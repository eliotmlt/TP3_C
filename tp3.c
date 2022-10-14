#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tp3.h"
test


// Fonction qui permet de cr�er un �lement d'une liste cha�n�e
// Params : indice de colonne (int), valeur de l'�lement (int)
// Return : pointeur vers le nouvele �lement cr��
element *creerElement(int colonne, int valeur) {
    element *nouvelElement = malloc(sizeof(element)); //allocation de la memoire pour nouvel element
    nouvelElement->col = colonne;
    nouvelElement->val = valeur;
    nouvelElement->suivant = NULL; //fin de la liste chainee
    return nouvelElement;

}


void remplirMatrice(matrice_creuse *m, int N, int M) {

    int i=0, j=0, temp=0;
    liste_ligne *ligne = m->tab_lignes; //on met dans ligne le tableau des lignes de m
    element **dernier = NULL; //pointeur sur pointeur d element
    for (i=0;i<N;i++)
    {
        dernier = ligne+i; //pointe sur contenu de: ligne [i] (qui pointe sur element colonne)
        for (j=0;j<M;j++)
        {
            printf("\n entrer entier matrice %d , %d \n", i+1, j+1);
            scanf("%d", &temp);
            if (temp != 0) //si temp=0 on ne l'ecrit pas dans la memoire
            {
                element *nouvel_element = NULL; //initialise nouvel element
                nouvel_element = creerElement(j, temp); //creation nouvel element
                *dernier= nouvel_element; //pointeur pointe sur nouvel element
                *dernier = nouvel_element->suivant; //dernier devient le pointeur vers l element suivant du nouvel element ajoute
            }
        }
    }
}


void afficherMatrice(matrice_creuse m){

    int n=m.Nlignes, M=m.Ncolonnes; //n nb lignes, m nb col
    int i=0,j=0;
    element *current = NULL; //initialise un pointeur sur un element
    liste_ligne *ligne = m.tab_lignes; //on recupere la liste des lignes : pointeur sur premiere ligne
    for (i=0;i<n;i++)
    {
        current = *(ligne+i);
        for(j=0;j<M;j++)
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

