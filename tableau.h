/*
 -----------------------------------------------------------------------------------
 Laboratoire : 07
 Fichier     : tableau.h
 Auteur(s)   : Maurice Lehmann et Nicolas Hungerbühler
 Date        : 28.11.2017

 But         : Déclaration des fonctions utiles à la génération du tableau
 *             
 *
 Compilateur : MinGW-g++ 6.3.0
 -----------------------------------------------------------------------------------
*/

#ifndef TABLEAU_H
#define TABLEAU_H

#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iostream>     /* cout */
#include <iomanip>      /* setw */

using namespace std ;

/**
 * 
 * @param tableau , tableau à afficher
 * @param tailleTableau , nombre d'élements du tableau
 * @param nbLances , nombre de lancés effectué. Utilisé pour faire le pourcentage
 */
void afficherTableau( int tableau[] , int tailleTableau , int nbLances  );
/**
 * 
 * @param valeur , valeur initiale
 * @param total , nombre total de lancés
 * @return Pourcentage , en type int
 */
int calculePourcentage( int valeur , int total );
/**
 * 
 * @param tab , tableau à remplire
 * @param tailleTableau , taille du tableau
 * @param nbLances , nombre de lancés total
 */
void remplireTableau( int tab[] , int tailleTableau , int nbLances );

#endif /* TABLEAU_H */

