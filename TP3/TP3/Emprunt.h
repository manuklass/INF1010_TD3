#ifndef EMPRUNT_H
#define EMPRUNT_H

#include <string>

#include "Livre.h"

class Emprunt
{
public:

	~Emprunt();

	std::string obtenirMatricule() const;
	Livre* obtenirLivre() const;
	unsigned int obtenirDateRetour() const;

	void modifierMatricule(const std::string& matricule);
	void modifierLivre(Livre *livre);
	void modifierDateRetour(unsigned int date);

//____________________________________A COMPLETER !


private:
	std::string matricule_;
	Livre *livre_;
	unsigned int dateRetour_;
	// DVD *DVD_;
};

#endif
