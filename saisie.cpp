/*
 -----------------------------------------------------------------------------------
 Laboratoire : 07
 Fichier     : saisie.cpp
 Auteur(s)   : Maurice Lehmann et Nicolas Hungerbühler
 Date        : 28.11.2017

 But         : Contient les fonctions utilisée pour la saisie utilisateur
 *
 Compilateur : MinGW-g++ 6.3.0
 -----------------------------------------------------------------------------------
*/

#include "saisie.h"

bool saisieUtilisateur( int& nbElement, int& nbLances )
{
   
   bool saisieCorrect = false ;
   //Variables entrées par l'utilisateur
   int elementsUtilisateur , lancesUtilisateur ;
   //On recommence tant que la saisie n'est pas correcte
   do
   {      
      cout << "Entrez le nombre d element [" 
      << MIN_ELEMENT << " - " << MAX_ELEMENT << "]" << endl ;
      
      cin >> elementsUtilisateur ; 
      
      cout << "Entrez le nombre de lances ["
              << MIN_LANCES << " - " << MAX_LANCES << "]" << endl ;
       
      cin >> lancesUtilisateur ;
      
      //Si l'utilisateur remplit correctement les champs 
      if(!cin.fail()){
         if(controleSaisie( elementsUtilisateur , MIN_ELEMENT , MAX_ELEMENT , "Nombre d'elements incorrect !")
         and controleSaisie( lancesUtilisateur , MIN_LANCES, MAX_LANCES , "Nombre de lances incorrect !")){

            saisieCorrect = true ;
            nbElement = elementsUtilisateur ;
            nbLances = lancesUtilisateur ;
         }
      }
      VIDER_BUFFER ;
      
   }while(!saisieCorrect) ;
}

bool controleSaisie( int valeur , unsigned int limiteInf , unsigned limiteSup , string message){
   
   //Controle d'une valeur entre deux bornes
   if( valeur < limiteInf or valeur > limiteSup ){
      cout << message << endl ;
      return false ;
   }
   return true ;
}

bool recommencerProgramme()
{
   char reponseUtilisateur ; 
   bool saisieOK;
   bool recommencerProgramme = false ; 
   
   // Demande de recommencer le programme
   do 
   {
      cout << "Voulez-vous recommencer le programme ? " << endl
           << "(si non, le programme se terminera) [O/N] : ";

      cin >> reponseUtilisateur;
      
      saisieOK = ( (reponseUtilisateur == 'O') || (reponseUtilisateur == 'N') || (reponseUtilisateur == 'o') || (reponseUtilisateur == 'n') );

      if (!saisieOK){
         cin.clear();
         cout << "Votre saisie n'est pas valide." << endl << endl;
      }
      // Si la saisie est valide, on va initialiser le flag qui détermine si le
      // programme doit recommencer.
      else{
         recommencerProgramme = (reponseUtilisateur == 'O') || (reponseUtilisateur == 'o');
      }
      VIDER_BUFFER;
      
   }while (!saisieOK);
   
   return recommencerProgramme ;
}