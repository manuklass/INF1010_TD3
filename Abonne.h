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

	// #2.(A TESTER) Une méthode pour obtenir le nombre d’emprunts limite
	unsigned int obtenirEmpruntsLimite() const;

	// #3.(À TERMINER) Une redéfinition de la méthode estEmprunte() qui prend en paramètre une cote et vérifie
	// si l’abonné possède un emprunt associé à cet objet. Si oui, la méthode retourne true,
	// sinon false
	bool estEmprunte(std::string cote);

	void modifierMatricule(const std::string& matricule);
	void modifierNom(const std::string& nom);
	void modifierPrenom(const std::string& prenom);
	void modifierAge(unsigned int age);

	void Abonne::ajouterEmprunt(Emprunt * emprunt)
	virtual unsigned int obtenirNombreEmprunte() const;

	friend std::ostream& operator<<(std::ostream& o, const Abonne& abonne);
	bool operator==(const Abonne& abonne) const;
	bool operator==(const std::string& matricule) const;
	friend bool operator==(const std::string& matricule, const Abonne& abonne);

//____________________________________ATTENTION ! A COMPLETER !
//Attributs
//A vous de choisir la porte des attributs !
	std::string matricule_;
	std::string nom_;
	std::string prenom_;
	unsigned int age_;
	std::vector<Emprunt*> vecEmprunts_;

private:

// #1. LimiteEmprunts(entier), la limite d’emprunt pour un abonne classique est de 2. Cet
// 	   attribut doit être déclaré comme private

	unsigned int LimiteEmprunts(unsigned int i);


};

	
#endif
