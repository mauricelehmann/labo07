/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   saisie.h
 * Author: mle
 *
 * Created on 27. novembre 2017, 10:36
 */

#ifndef SAISIE_H
#define SAISIE_H

   #include <cstdlib>  // Pour exit_success
   #include <iostream> // Pour les entrées et sorties
   #include <limits>   // Pour vider le buffer
   #define VIDER_BUFFER if(cin.fail()) cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n')
      
   using namespace std ;
   
   //Déclaration des constantes utilisée pour la saisie
   const unsigned int MIN_ELEMENT = 0 ,
                      MAX_ELEMENT = 100 ,
                      MIN_LANCES = 0 ,
                      MAX_LANCES = 10000 ;
   
   
   
   //TODO Commentaire ! 
   bool saisieUtilisateur( int& nbElement, int& nbLances );

   /**
   * Contrôle d'une valeur entre deux bornes
   * @param valeur : Valeur à tester
   * @param limiteInf , limiteSup : Borne inferieur et borne supérieur
   * @param message : Message personnalisé
   * @return true si la valeur est plus grande que limiteInf et plus petite que limiteSup, sinon false.
   */
   bool controleSaisie( int valeur , unsigned int limiteInf , unsigned limiteSup , string message);
   
    /**
    * Demande à l'utlisateur si il veut recommencer le programme ( "O" pour oui , ou "N" pour non )
    * @return true si l'utilisateur entre "O" , false si l'utilisateur entre "N"
    */
   bool recommencerProgramme();
   

#endif /* SAISIE_H */

