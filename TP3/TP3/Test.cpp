#include <vector>
#include <iostream>
//#include "Bibliotheque.h"
//#include "Abonne.h"
#include "Livre.h"
#include "ObjetEmpruntable.h"
#include "DVD.h"

using namespace std;

int main()
{
	Livre *livre1 = new Livre("GA403", "Big C++", 2009, 8, 2, "Cay HORTSTMANN", "Informatique");
	Livre *livre2 = new Livre("QA203", "Calcul a plusieurs variables partie 1", 2011, 3, 1, "Cay HORTSTMANN", "Informatique");
	//Livre *livre3 = new Livre(*livre2);
	Livre *livre4 = new Livre("AC409", "Le chateau d'Ortrante", 1764, 16, 2, "Cay HORTSTMANN", "Informatique");
	Livre *livre5 = new Livre("BD302", "Harry Potter et le prisionier d'Azkaban", 1999, 3, 17, "JK ROWLING", "Science-Fiction");
	Livre *livre6 = new Livre();
	cout << *livre2;
	/*livre2->modifierTitre("Calcul a plusieurs variables partie 2");
	livre2->modifierCote("QA204");
	livre2->modifierNbExemplaires(42);
	*/
	//*livre6 = *livre1;
	livre2->modifierAuteur("john smith");
	livre2->modifierGenre("Potatos");
	// Affichages des informations sur chaque livre

	cout << *livre1;
	cout << *livre2;
	//cout << *livre3;
	cout << *livre4;
	cout << *livre5;
	cout << "yo" << endl;
	cout << *livre6;
	cout << "banana"<<endl;
	Dvd *dvd1 = new Dvd("D8403", "Rush Hour", 1998, 2, 13, "Al", { "Jackie Chan", "Chris Tucker" });
	Dvd *dvd2 = new Dvd("D7203", "Avenger", 2012, 3, 5, "Nick Fury", { "Iron Man", "Thor", "Hulk", "Captain America", "Black Window" });

	// Tests sur les Dvds
	cout << *dvd1;
	cout << *dvd2;
	dvd2->modifierRealisateur("john smith");
	cout << *dvd2;
	//dvd2->rechercher("john smith");

}