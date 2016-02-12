#ifndef OBJETEMPRUNTABLE_H
#define OBJETEMPRUNTABLE_H

#include <string>
#include <iostream>

class ObjetEmpruntable
{
public :
	ObjetEmpruntable();
	ObjetEmpruntable(const std::string& cote, const std::string& titre, unsigned int annee,
		unsigned int ageMin, unsigned int nbExemplaires);
	~ObjetEmpruntable();

	std::string obtenirCote() const;
	std::string obtenirTitre() const;
	unsigned int obtenirAnnee() const;
	unsigned int obtenirAgeMinimal() const;
	unsigned int obtenirNbExemplaires() const;
	unsigned int obtenirNbDisponibles() const;

	//convertirMinuscule permet de convertir une phrase en minuscule
	std::string convertirMinuscule(const std::string& phrase) const;

	void modifierNbExemplaires(unsigned int nbExemplaires);
	void modifierNbDisponibles(unsigned int nbDisponibles);
	void modifierTitre(const std::string& titre);
	void modifierCote(const std::string& cote);
	void modifierAnnee(unsigned int annee);
	//recherche renvoie un true si le motsCle est pr�sent dans le titre ou dans la cote; false sinon
	bool recherche(const std::string& motsCle) const;


	friend std::ostream& operator<<(std::ostream& o, const ObjetEmpruntable& objetEmpruntable);
	bool operator==(const ObjetEmpruntable& objetEmpruntable) const;
	bool operator==(const std::string& cote) const;
	friend bool operator==(const std::string& cote,  const ObjetEmpruntable& objetEmpruntable);
	bool operator< (const ObjetEmpruntable& objetEmpruntable) const;

//____________________________________ATTENTION ! A COMPLETER !
//Attributs
//A vous de choisir la port� des attributs !

	std::string cote_;
	std::string titre_;
	unsigned int annee_;
	unsigned int ageMinimal_;
	unsigned int nbExemplaires_;
	unsigned int nbDisponibles_;
};

#endif
