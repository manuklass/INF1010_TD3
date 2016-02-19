#include <iostream>
#include "Etudiant.h"
#include <string>
using namespace std;

#undef LIMITE_EMPRUNTS
#define LIMITE_EMPRUNTS 4
// Constructeur par defaut
Etudiant::Etudiant()
	:limiteEmprunts_(LIMITE_EMPRUNTS), ecole_("")
{
}
// Constructeur par parametres--------------------------------------------------------
Etudiant::Etudiant(Abonne* abonne, std::string ecole, unsigned int limiteEmprunts)
	: ecole_(ecole), limiteEmprunts_(LIMITE_EMPRUNTS)
{
}
// Destructeur
Etudiant::~Etudiant(){
}
// Acces et modification du nouveau parametre
string Etudiant::obtenirEcole() const{
	return ecole_;
}
void Etudiant::modifierEcole(const string& ecole){
	ecole_ = ecole;
}

// Redefinition de obtention du nombre d'emprunts-----------------------------------------------------
unsigned int Etudiant::obtenirNombreEmprunt() const{
	int nbEmprunt = obtenirNombreEmprunte();
	return nbEmprunt;
}
ostream & operator<<(ostream & o, const Etudiant & etudiant){
	// Affichage des informations de l'abonne
	cout << etudiant.abonne_;
	// Affichage des informations specifique a un etudiant
	o << "Ecole de provenance : " << etudiant.ecole_ << "; Limite d'emprunts : " << etudiant.limiteEmprunts_;
	return o;
}