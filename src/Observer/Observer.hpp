/**
 * @file Observer.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe Observer (abstract)
 */


#ifndef OBSERVER_HPP
#define OBSERVER_HPP
#include <iostream>

#include "Subject.hpp"

class Observer
{
	public:
		/*
			 * @brief mise a jour de la donnée. Virtuel
			 * @param une chaine de caractères.
			 *
			 */
			virtual void update(std::string d)=0;
};

#endif