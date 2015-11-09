#ifndef SUJET_HPP
#define SUJET_HPP
#include "Observer.hpp"
#include <iostream>

class Observer;
class Sujet
{
	public:
			virtual int enregistrerObs(Observer* o)=0;
			virtual int supprimerObs(Observer* o)=0;
			virtual void notifierObs()=0;

};

#endif