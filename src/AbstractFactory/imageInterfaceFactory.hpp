/**
 * @file imageInterfaceFactory.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe ImageInterfaceFactory, utilisé pour la création de l'interface lors de la lecture d'un fichier image
 */

#ifndef IMAGEINTERFACEFACTORY_H
#define IMAGEINTERFACEFACTORY_H

#include "interfaceFactory.hpp"
#include "interface.hpp"
#include "buttonsI.hpp"
#include "formatBig.hpp"
 
class ImageInterfaceFactory : public InterfaceFactory
{
	public:
		
		/**
		 * @brief Crée l'interface adéquate à la lecture d'un fichier image
		 * @param ButtonsI bi, FormatBig fb
		 */
		Interface createInterface(Buttons* b, Format* f);
};

#endif