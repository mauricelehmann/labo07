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
int genererValeurAleatoire( int nbValeurs , int nbLance ){
   
   int valeur ; 
   int arrayValeur[nbLance] ;
   
    //Initialisation
   srand(time(0));
   
    for(int i = 0 ; i < nbLance ; i++  ){
       valeur = rand() %  nbValeurs ;
       arrayValeur[i] = valeur ;
      }
   return 0 ;
}
