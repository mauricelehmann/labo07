/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "tableau.h"

void initialisationTableau( int nbValeurs , int nbLance ){
   
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
   afficherTableau( arrayValeur , nbValeurs , nbLance );
 
}

void afficherTableau(  int tableau[] , int tailleTableau , int nbLances ){
   
   //Affichage du tableau
   int pourcentage ;
   
   for(int indice = 0 ; indice < tailleTableau ; indice++ ){
      //Calcule pourcentage
      pourcentage = calculePourcentage( tableau[indice] , nbLances ) ;
     //Affichage ligne
     cout << "tableau[" << indice << "]" << setw(5)
          << pourcentage
          << setw(4) ;
     //Afficher la représentation graphique du pourcentage
     for( int caractere = 0 ; caractere < pourcentage ; caractere ++ ){
        cout << "#" ;
     }
     cout << endl ;
   }
}

int calculePourcentage( int valeur , int total ){
   
   int pourcentage ;
   //C++ a besoin de type float pour avoir une division précise
   //Nous retournons quand même un résultat en int , selon le cahier des charges
   pourcentage = ( (float)valeur/ (float)total )  * 100 ; 
   return pourcentage ;
}
