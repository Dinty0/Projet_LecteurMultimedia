#ifndef FICHIERSOUSTITRES_HPP
#define FICHIERSOUSTITRES_HPP
#include "Sujet.hpp"
#include <vector>
#include <ctime>


class FichierSousTitre : public Sujet
{
	private:
		std::vector<Observer*> liste_;
		std::string donnee_;
		std::string deb_;
		std::string fin_;
	public:	
		FichierSousTitre();
		std::string getDonnee();
		void setDonnee(std::string l);
		int enregistrerObs(Observer* o);
		int supprimerObs(Observer* o);
		void notifierObs();
		bool isDigit(std::string s);

};

#endif