/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "saisie.h"

bool saisieUtilisateur( int& nbElement, int& nbLances )
{
   bool saisieCorrect = false ;
   int elementsUtilisateur , lancesUtilisateur ;
   do
   {      
      cout << "Entrez le nombre d element : " << endl ;
      cin >> elementsUtilisateur ; 
      cout << "Entrez le nombre de lances : " << endl ;
      cin >> lancesUtilisateur ;

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