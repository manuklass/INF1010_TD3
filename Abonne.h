#ifndef ABONNE_H
#define ABONNE_H

#include <string>
#include "Emprunt.h"
#include "ObjetEmpruntable.h"
#include <vector>
#include <iostream>

#define LIMITE_EMPRUNTS 2

class Abonne
{
public:

	Abonne();
	Abonne(const std::string& matricule, const std::string& nom, const std::string& prenom, unsigned int age);
	~Abonne();

	std::string obtenirMatricule() const;	
	std::string obtenirNom() const;
	std::string obtenirPrenom() const;
	unsigned int obtenirAge() const;
	std::vector<Emprunt*> obtenirEmprunts() const;

	void modifierMatricule(const std::string& matricule);
	void modifierNom(const std::string& nom);
	void modifierPrenom(const std::string& prenom);
	void modifierAge(unsigned int age);

	void Abonne::ajouterEmprunt(Emprunt * emprunt)
	unsigned int obtenirNombreEmprunte() const;

	friend std::ostream& operator<<(std::ostream& o, const Abonne& abonne);
	bool operator==(const Abonne& abonne) const;
	bool operator==(const std::string& matricule) const;
	friend bool operator==(const std::string& matricule, const Abonne& abonne);

//____________________________________ATTENTION ! A COMPLETER !
//Attributs
//A vous de choisir la port� des attributs !
	std::string matricule_;
	std::string nom_;
	std::string prenom_;
	unsigned int age_;
	std::vector<Emprunt*> vecEmprunts_;

};

	
#endif
