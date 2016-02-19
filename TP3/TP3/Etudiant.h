#ifndef ETUDIANT_H
#define ETUDIANT_H

#undef LIMITE_EMPRUNTS2568
#define LIMITE_EMPRUNTS 4
#include <string>
#include "Abonne.h"

class Etudiant : public Abonne{
public:
	Etudiant();
	Etudiant(Abonne* abonne, std::string ecole, unsigned int limiteEmprunts);
	void ajouterEtudiant(Abonne* abonne);
	~Etudiant();
	
	std::string obtenirEcole() const;
	void modifierEcole(const std::string& ecole);
	unsigned int obtenirNombreEmprunt() const;
	friend std::ostream& operator<<(std::ostream& o, const Etudiant& etudiant);
private:
	std::string ecole_;
	unsigned int limiteEmprunts_;
	Abonne* abonne_;
};

#endif