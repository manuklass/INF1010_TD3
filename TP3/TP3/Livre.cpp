
#include <iostream>
#include "Livre.h"
#include <string>
using namespace std;


// constructeur par parametres
Livre::Livre(const string& cote, const string& titre, unsigned int annee, unsigned int ageMin, unsigned int nbExemplaires, const string auteur, const string genre)
	: objetEmpruntable_(cote, titre, annee, ageMin, nbExemplaires), auteur_(auteur), genre_(genre)
{
}
// constructeur par defaut
Livre::Livre()
	: objetEmpruntable_(), auteur_(""), genre_("")
{
}
// obtention des informations specifiques a la classe livre
std::string Livre::obtenirAuteur() const{
	return auteur_;
}
std::string Livre::obtenirGenre() const{
	return genre_;
}
// modification des informations specifiques a la classe livre
void Livre::modifierAuteur(const std::string& auteur){
	auteur_ = auteur;
}
void Livre::modifierGenre(const std::string& genre){
	genre_ = genre;
}
bool Livre::rechercher(const std::string & motsCle) const
{
	std::size_t trouveTitre = convertirMinuscule(titre_).find(convertirMinuscule(motsCle));
	std::size_t trouveCote = convertirMinuscule(cote_).find(convertirMinuscule(motsCle));
	std::size_t trouveAuteur = convertirMinuscule(auteur_).find(convertirMinuscule(motsCle));
	std::size_t trouveGenre = convertirMinuscule(genre_).find(convertirMinuscule(motsCle));
	bool estTrouve =
		(trouveTitre != string::npos) ||
		(trouveAuteur != string::npos) ||
		(trouveGenre != string::npos) ||
		(trouveCote != string::npos);

	return estTrouve;
}
ostream& operator<<(std::ostream& o, const Livre& livre){
	cout << "Information sur le livre :" << endl << livre.objetEmpruntable_;
	o << " Auteur : " << livre.auteur_ << "; Genre : " << livre.genre_ << endl;
	return o;
}