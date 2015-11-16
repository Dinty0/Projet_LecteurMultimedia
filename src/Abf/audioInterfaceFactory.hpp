/**
 * @file audioInterfaceFactory.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe AudioInterfaceFactory, utilisé pour la création de l'interface lors de la lecture d'un fichier audio
 */

#include "interfaceFactory.hpp"

class Interface;

class AudioInterfaceFactory : public InterfaceFactory
{
	public:
		/**
		 * @brief Crée l'interface adéquate à la lecture d'un fichier audio
		 * @param ButtonsVA bva, FormatSmall fs
		 * @return Interface audio
		 */
		Interface createInterface(ButtonsVA bva, FormatSmall fs);
};