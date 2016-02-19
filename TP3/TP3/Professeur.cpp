#include <iostream>
#include "Professeur.h"
#include <string>
using namespace std;

#undef LIMITE_EMPRUNTS
//#define LIMITE_EMPRUNTS 4
vector<string> Professeur::obtenirEcoles() const{
	return listeEcoles_;
}
bool retirerEcole(const std::string& ecole){

}
void ajouterEcole(const std::string& ecole){

}
unsigned int obtenirLimiteEmprunt() {

}


ostream & operator<<(ostream & o, const Professeur & professeur){
	// Affichage des informations de l'abonne
	cout << professeur.abonne_;
	// Affichage des informations specifique a un etudiant
	o << "Limite d'emprunts : " << professeur.limiteEmprunts_ << endl << "LISTE DES ECOLES : " << professeur.listeEcoles_ << endl ;
	return o;
}