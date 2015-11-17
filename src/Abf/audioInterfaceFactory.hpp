/**
 * @file audioInterfaceFactory.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe AudioInterfaceFactory, utilisé pour la création de l'interface lors de la lecture d'un fichier audio
 */

#ifndef AUDIOINTERFACEFACTORY_H
#define AUDIOINTERFACEFACTORY_H
 
#include "interfaceFactory.hpp"

class Interface;
class ButtonsVA;
class FormatSmall;

class AudioInterfaceFactory : public InterfaceFactory
{
	public:
		/**
		 * @brief Crée l'interface adéquate à la lecture d'un fichier audio
		 * @param ButtonsVA bva, FormatSmall fs
		 * @return Interface audio
		 */
		Interface createInterface(Audio a);
};

#endif