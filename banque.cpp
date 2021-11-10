// banque.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <iostream>
#include "banque.h"
using namespace std;

bool compte::retirerargent(double somme)
{
    if(solde>somme)
    {
        solde = solde - somme;
        return true;
    }
    
    else 
         return false;
}

void compte::deposerargent(double somme)
{
    solde = solde + somme;
    
}

void compte::consulter()
{
    std::cout << "votre solde est :" << solde;
}

bool compte::transferer(double somme, compte c)
{
    return false;
}


