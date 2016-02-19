#ifndef PROFESSEUR_H
#define PROFESSEUR_H

#include <string>
#include "Abonne.h"
#undef LIMITE_EMPRUNTS
#define LIMITE_EMPRUNTS 4
//#define LIMITE_EMPRUNTS  2*listeEcoles_.size()
class Professeur : public Abonne{
public:
	Professeur();
	Professeur(Abonne* abonne, std::string ecole, unsigned int limiteEmprunts);
	~Professeur();


	vector<std::string> obtenirEcoles() const;
	bool retirerEcole(const std::string& ecole);
	void ajouterEcole(const std::string& ecole);
	unsigned int obtenirLimiteEmprunt() const;

	friend std::ostream& operator<<(std::ostream& o, const Professeur& professeur);
private:
	// vect string ecoles
	vector<std::string> listeEcoles_;
	unsigned int limiteEmprunts_;
	Abonne* abonne_;
};

#endif