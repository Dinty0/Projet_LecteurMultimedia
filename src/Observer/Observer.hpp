#ifndef OBSERVER_HPP
#define OBSERVER_HPP
#include <iostream>

#include "Sujet.hpp"

class Observer
{
	public:
			virtual void update(std::string d)=0;
};

#endif