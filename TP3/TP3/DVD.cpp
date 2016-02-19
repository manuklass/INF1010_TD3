
#include <vector>
#include <iostream>
#include "DVD.h"
#include <string>
using namespace std;

Dvd::Dvd(const std::string& cote, const std::string& titre, unsigned int annee, unsigned int ageMin, unsigned int nbExemplaires, const string realisateur, const vector<std::string> acteurs)
	:objetEmpruntable_(cote, titre, annee, ageMin, nbExemplaires), realisateur_(realisateur), acteurs_(acteurs)
{
}

std::string Dvd::obtenirRealisateur() const{
	return realisateur_;
}
//vector<std::string> Dvd::obtenirActeurs() const{
//	return acteurs_;
//}
void Dvd::modifierRealisateur(const string& realisateur){
	realisateur_ = realisateur;
}
//void Dvd::modifierActeurs(const string& acteurs){//------------------------------------------------
//	acteurs_ = acteurs;
//}
//bool Dvd::rechercher(const string& motsCle) const{//-------------------------
//
//}

ostream& operator<<(std::ostream& o, const Dvd& dvd){
	cout << "Information sur le DVD :" << endl << dvd.objetEmpruntable_;
	o << " Realisateur : " << dvd.realisateur_ << "; Acteurs : " << "{...}" << endl;
	return o;
}