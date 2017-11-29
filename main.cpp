/*
 -----------------------------------------------------------------------------------
 Laboratoire : 07
 Fichier     : main.cpp
 Auteur(s)   : Maurice Lehmann et Nicolas Hungerbühler
 Date        : 28.11.2017

 But         : Génère un tableau à n éléments , puis incrémente aléatoirement , un nombre de fois m 
 *             les éléments du tableau. Affiche ensuite les résultats sous forme de pourcentage
 *             et de répresentation graphique de ces pourcentages. 
 *             
 Remarque(s) : Les valeur n et m mentionnées sont saisies par l'utilisateur.
 *
 Compilateur : MinGW-g++ 6.3.0
 -----------------------------------------------------------------------------------
*/
#include "saisie.h" 
#include "tableau.h"


int main() {
   
   int nbElements = 0 , nbLances  = 0 ;

   //Le programme recommence ou s'arrête selon le choix de l'utilisateur après son execution.
   do
   {
      //Saisie utilisateur : taille du tableau et nombre de lancés
      saisieUtilisateur( nbElements , nbLances );
      
      int valeur ;
      //Les valeurs par défaut d'un tableau ne sont PAS initialisées à 0 si on ne met pas les {}
      int arrayValeur[nbElements] = {} ;
      
      
      //Remplissage du tableau avec des valeurs aléatoires
      remplireTableau( arrayValeur , nbElements , nbLances ) ;
      //Affichage du tableau
      afficherTableau(arrayValeur , nbElements , nbLances );
 
   } while(recommencerProgramme());
   
   return EXIT_SUCCESS;
}

