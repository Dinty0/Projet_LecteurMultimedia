#ifndef OBSERVER_HPP
#define OBSERVER_HPP
#include <iostream>

#include "Subject.hpp"

class Observer
{
	public:
		/*
			 * @brief mise a jour de la donnée
			 * @param une chaine de caractères.
			 *
			 */
			virtual void update(std::string d)=0;
};

#endif