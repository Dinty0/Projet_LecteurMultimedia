#include "FichierSousTitre.hpp"
#include "SousTitres.hpp"
#include <iostream>
#include <fstream>

 

using namespace std;
int main(){
	FichierSousTitre a;
	SousTitres st(&a);
	a.enregistrerObs(&st);
	// on ouvre le fichier en lecture
	a.setDonnee("fichier.txt");

	return 0;
}