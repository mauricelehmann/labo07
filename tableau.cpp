/*
 -----------------------------------------------------------------------------------
 Laboratoire : 07
 Fichier     : tableau.cpp
 Auteur(s)   : Maurice Lehmann et Nicolas Hungerbühler
 Date        : 28.11.2017

 But         : Contient les fonctions utilisée pour la génération du tableau
 *             
 *
 Compilateur : MinGW-g++ 6.3.0
 -----------------------------------------------------------------------------------
*/

#include "tableau.h"

void afficherTableau( int tableau[] , int tailleTableau ,int nbLances ){
   
   //Affichage du tableau
   int pourcentage ;
   
   for(int indice = 0 ; indice < tailleTableau ; indice++ ){
      //Calcule pourcentage
      pourcentage = calculePourcentage( tableau[indice] , nbLances ) ;
     //Affichage d'une ligne
     cout << "tableau[" << indice << "]" << setw(5)
          << pourcentage
          //Espace entre les pourcentages et leurs représentation graphique
          << setw(4) ;
     
     //Afficher la représentation graphique du pourcentage
     for( int caractere = 0 ; caractere < pourcentage ; caractere ++ ){
        cout << "#" ;
     }
     //Mise à la ligne
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

void remplireTableau( int tab[] , int tailleTableau , int nbLances ){
   
   int valeur ;
   //Initialisation du random
   srand(time(0));
   
   //Remplissage du tableau en fonction des valeurs aléatoires
   for(int i = 0 ; i < nbLances ; i++  ){
         //Fix la valeur du random entre 0 et la taille du tableau
         valeur = rand() %  tailleTableau ;
         tab[valeur] += 1 ;
      }
}