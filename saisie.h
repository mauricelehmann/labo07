/*
 -----------------------------------------------------------------------------------
 Laboratoire : 07
 Fichier     : saisie.h
 Auteur(s)   : Maurice Lehmann et Nicolas Hungerbühler
 Date        : 28.11.2017

 But         : Déclaration des fonctions utilisée pour la saisie utilisateur
 *             Déclaration des constantes qui vérifient la saisie utilisateur
 *             Define du VIDER_BUFFER
 *
 Compilateur : MinGW-g++ 6.3.0
 -----------------------------------------------------------------------------------
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
   
   
   
   /**
    * 
    * @param nbElement , nombre d'éléments du tableau , ne peut pas dépasser MAX_ELEMENT
    * @param nbLances , nombre de lancés aléatoire , ne peut pas dépasser MAX_LANCES
    * @return true si la saisie est correct , sinon false
    */
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

