#include <iostream>
#include "Emprunt.h"

using namespace std;


Emprunt::~Emprunt()
{

}

string Emprunt::obtenirMatricule() const
{
	return matricule_;
}

Livre* Emprunt::obtenirLivre() const
{
	return livre_;
}

unsigned int Emprunt::obtenirDateRetour() const
{
	return dateRetour_;
}

void Emprunt::modifierMatricule(const string &matricule)
{
	matricule_ = matricule;
}

void Emprunt::modifierLivre(Livre* livre)
{
	livre_ = livre;
}

void Emprunt::modifierDateRetour(unsigned int date)
{
	dateRetour_ = date;
}

///////////////////////////////////////////////////////
//        MODIFICATIONS SUR LE CODE DE BASE          //
///////////////////////////////////////////////////////


