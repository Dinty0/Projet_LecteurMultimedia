/**
 * @file imageInterfaceFactory.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe ImageInterfaceFactory, utilisé pour la création de l'interface lors de la lecture d'un fichier image
 */

#include "interfaceFactory.hpp"

class Interface;

class ImageInterfaceFactory : public InterfaceFactory
{
	public:
		/**
		 * @brief Crée l'interface adéquate à la lecture d'un fichier image
		 * @param ButtonsI bi, FormatBig fb
		 */
		Interface createInterface(ButtonsI bi, FormatBig fb);
};