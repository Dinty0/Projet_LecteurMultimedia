/**
 * @file videoInterfaceFactory.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe VideoInterfaceFactory, utilisé pour la création de l'interface lors de la lecture d'un fichier video
 */

#ifndef VIDEOINTERFACEFACTORY_H
#define VIDEOINTERFACEFACTORY_H

#include "interfaceFactory.hpp"

class Interface;
class ButtonsVA;
class FormatBig;

class VideoInterfaceFactory : public InterfaceFactory
{
	public:

		VideoInterfaceFactory();
		/**
		 * @brief Crée l'interface adéquate à la lecture d'un fichier video
		 * @param ButtonsVa bva, FormatBig fb
		 */
		Interface createInterface(ButtonsVA bva, FormatBig fb);
};

#endif