/*************************************************************************
                           ReadCSV  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Réalisation de la classe <ReadCSV> (fichier ReadCSV.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
using namespace std;
#include <fstream>

//------------------------------------------------------ Include personnel
#include "ReadCSV.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type ReadCSV::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
ReadCSV & ReadCSV::operator = ( const ReadCSV & unReadCSV )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
ReadCSV::ReadCSV ( const ReadCSV & unReadCSV )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <ReadCSV>" << endl;
#endif
} //----- Fin de ReadCSV (constructeur de copie)


ReadCSV::ReadCSV ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <ReadCSV>" << endl;
#endif
} //----- Fin de ReadCSV


ReadCSV::~ReadCSV ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <ReadCSV>" << endl;
#endif
} //----- Fin de ~ReadCSV


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

