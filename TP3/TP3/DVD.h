#ifndef DVD_H
#define DVD_H
#include <vector>
#include <string>
#include "ObjetEmpruntable.h"
using std::vector;


class Dvd : public ObjetEmpruntable{
public:
	Dvd(const std::string& cote, const std::string& titre, unsigned int annee, unsigned int ageMin, unsigned int nbExemplaires, const std::string realisateur, const vector<std::string> acteurs);

	std::string obtenirRealisateur() const;
	vector<std::string> obtenirActeurs() const;
	void modifierRealisateur(const std::string& realisateur);
	void modifierActeurs(const std::string& acteurs);
	bool rechercher(const std::string& motsCle) const;

	friend std::ostream& operator<<(std::ostream& o, const Dvd& dvd);
private:
	ObjetEmpruntable objetEmpruntable_;
	std::string realisateur_;
	vector<std::string> acteurs_;
};

#endif