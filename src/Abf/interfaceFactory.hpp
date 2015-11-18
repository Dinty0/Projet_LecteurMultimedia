/**
 * @file interfaceFactory.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe InterfaceFactory, permettant de créer l'interface adéquate selon le type de média
 */

#ifndef INTERFACEFACTORY_H
#define INTERFACEFACTORY_H

class Interface;
class Media;

class InterfaceFactory
{
	public:

		/*
		 * @brief Crée l'interface adéquate selon le type de média
		 * @return Une Interface
		 *
		 */
		virtual Interface createInterface(Media m)=0;
};

#endif