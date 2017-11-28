/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mle
 *
 * Created on 27. novembre 2017, 10:32
 */

#include "saisie.h" 
#include "tableau.h"


int main() {

   int nbElements , nbLances ;

   //Le programme recommence ou s'arrête selon le choix de l'utilisateur après son execution.
   do
   {
      
      saisieUtilisateur( nbElements , nbLances );
          
      int valeur ; 
      int arrayValeur[nbElements] = {} ;

      //Initialisation du random
      srand(time(0));
   
      //Remplissage du tableau en fonction des valeurs aléatoires
      for(int i = 0 ; i < nbLances ; i++  ){
         valeur = rand() %  nbElements ;
         arrayValeur[valeur] += 1 ;
      }
      
      //Affichage du tableau
      afficherTableau(arrayValeur , nbElements , nbLances );
 
   } while(recommencerProgramme());
   
   return EXIT_SUCCESS;
}

