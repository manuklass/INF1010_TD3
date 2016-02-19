#include <iostream>
#include "EtudiantPolytechnique.h"
#include <string>
using namespace std;

#undef LIMITE_EMPRUNTS
#define LIMITE_EMPRUNTS 8
// Constructeur par parametres
EtudiantPolytechnique(const string& matricule, const string& nom, const std::string& prenom, unsigned int age, const std::string& ecole)
	: matricule_(matricule), nom_(nom), prenom_(prenom), age_(age), ecole_("Polytechnique Montreal"), limiteEmprunts_(LIMITE_EMPRUNTS)
	{
}
//??----------------------------------------------------------------------------------------------------
unsigned int Etudiant::obtenirNombreEmprunt() const{
	int nbEmprunt = obtenirNombreEmprunte();
	return nbEmprunt;
}

