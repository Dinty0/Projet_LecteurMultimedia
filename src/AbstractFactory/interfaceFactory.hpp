 /**
 * @file interfaceFactory.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe InterfaceFactory, permettant de créer l'interface adéquate selon le type de média
 */

#ifndef INTERFACEFACTORY_H
#define INTERFACEFACTORY_H

#include "interface.hpp"
#include "media.hpp"

class InterfaceFactory
{
	public:

		/*
		 * @brief Crée l'interface adéquate selon le type de média
		 * @return Une Interface
		 *
		 */
		virtual Interface createInterface(Buttons* b, Format* f)=0; //{std::cout << "aie" << std::endl;}
};

#endif