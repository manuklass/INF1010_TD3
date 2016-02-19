#ifndef LIVRE_H
#define LIVRE_H

#include <string>
#include "ObjetEmpruntable.h"


class Livre : public ObjetEmpruntable{
public:
	Livre(const std::string& cote, const std::string& titre, unsigned int annee, unsigned int ageMin, unsigned int nbExemplaires, const std::string auteur, const std::string genre);
	Livre();
	std::string obtenirAuteur() const;
	std::string obtenirGenre() const;
	void modifierAuteur(const std::string& auteur);
	void modifierGenre(const std::string& genre);
	bool rechercher(const std::string & motsCle) const;

	friend std::ostream& operator<<(std::ostream& o, const Livre& livre);
private:
	ObjetEmpruntable objetEmpruntable_;
	std::string auteur_;
	std::string genre_;
};

#endif