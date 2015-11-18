#include "FichierSousTitre.hpp"
#include <iostream>
#include <fstream>
#include <iterator>
#include <algorithm>
#include <thread>
#include <locale> 
#include <chrono>
#include <stdlib.h>

FichierSousTitre::FichierSousTitre()
{
	donnee_="";
}

int FichierSousTitre::enregistrerObs(Observer* o)
{
	liste_.push_back(o);
	return 1;
}

int FichierSousTitre::supprimerObs(Observer *o)
{
	std::vector<Observer*>::iterator it = std::find(liste_.begin(), liste_.end(), o);
	if (it != liste_.end())
	{
		liste_.erase(it);
		return 1;
	}
	return -1;

}

void FichierSousTitre::notifierObs()
{
	for(Observer *o : liste_ )
	{
		o->update(donnee_);

	}
}

std::string FichierSousTitre::getDonnee()
{
	return donnee_;
}

bool FichierSousTitre::isDigit(std::string s)
{
	for(unsigned int i=0; i<s.length(); ++i){
		int test = atoi(&s[i]);
		if(test>47 && test<58){
		
			return false;
		}
	}
	return true;

}

void FichierSousTitre::setDonnee(std::string nom)
{	
	
	std::ifstream file(nom);
	
	while(!file.eof())
	{
		
		getline(file, donnee_);
		donnee_.pop_back();
		if (!isDigit(donnee_) && !donnee_.empty())
		{
			std::cout << donnee_.substr(13,3)<<std::endl; 

			if(donnee_.substr(13,3) == "-->")
			{
			
				deb_ = donnee_.substr(0, 11);
				fin_ = donnee_.substr(17, 11);
				notifierObs();
			

			}
			
		}
		 

    std::this_thread::sleep_for (std::chrono::seconds(1));
    }

}
