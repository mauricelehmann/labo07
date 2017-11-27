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

   //TODO : DELETE
   #include <iostream> // Pour les entrées et sorties
   using namespace std ;


int main() {

   int nbElements , nbLances ;
   
   //Le programme recommence ou s'arrête selon le choix de l'utilisateur après son execution.
   do
   {
     saisieUtilisateur(nbElements , nbLances ); 
     //
     genererValeurAleatoire(nbElements, nbLances) ;
     

   } while(recommencerProgramme());
   
   return EXIT_SUCCESS;
   
}

