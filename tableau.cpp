/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "tableau.h"

//TODO DELETE : 
#include <iostream>
using namespace std ;
// END TODO

//La valeur min est toujours zéro
void genererValeurAleatoire( int nbValeurs , int nbLance ){
   
   int valeur ; 
   int arrayValeur[nbValeurs] = {} ;

    //Initialisation
   srand(time(0));
   
   //Remplissage du tableau
   for(int i = 0 ; i < nbLance ; i++  ){
       valeur = rand() %  nbValeurs ;
       arrayValeur[valeur] += 1 ;
   }
   //Affiche le tableau
   afficherTableau(arrayValeur , nbValeurs );
 
}

void afficherTableau( int tableau[] , int tailleTableau ){
     //Affichage du tableau
   for(int j = 0 ; j < tailleTableau ; j++ ){
     cout << tableau[j] << endl ;
   }
}
