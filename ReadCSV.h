/*************************************************************************
                           ReadCSV  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <ReadCSV> (fichier ReadCSV.h) ----------------
#if ! defined ( ReadCSV_H )
#define ReadCSV_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <ReadCSV>
//
//
//------------------------------------------------------------------------

class ReadCSV 
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //


//------------------------------------------------- Surcharge d'opérateurs
    ReadCSV & operator = ( const ReadCSV & unReadCSV );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    ReadCSV ( const ReadCSV & unReadCSV );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    ReadCSV ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~ReadCSV ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//-------------------------------- Autres définitions dépendantes de <ReadCSV>

#endif // ReadCSV_H
