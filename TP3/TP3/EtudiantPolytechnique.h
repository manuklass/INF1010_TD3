#ifndef ETUDIANTPOLYTECHNIQUE_H
#define ETUDIANTPOLYTECHNIQUE_H
#define LIMITE_EMPRUNTS 8
#include <string>
#include "Etudiant.h"
#include "Abonne.h"

class EtudiantPolytechnique : public Etudiant{
public:
	EtudiantPolytechnique(const std::string& matricule, const std::string& nom, const std::string& prenom, unsigned int age);
	unsigned int obtenirNombreEmprunt() const;
private:
	std::string ecole_;
	unsigned int limiteEmprunts_;
	Abonne* abonne_;
};

#endif