#include "SousTitres.hpp"


SousTitres::SousTitres(Sujet *s)
{
	sujet_=s;
	donnee_="";
}

void SousTitres::affichage(){
	std::cout<<donnee_<<std::endl;
}

void SousTitres::update(std::string d)
{
	donnee_=d;
	affichage();
}

