/**
 * @file interface.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe Interface
 */

#ifndef INTERFACE_H
#define INTERFACE_H

#include <vector>
#include "format.hpp"
#include "buttons.hpp"

class Interface
{
	private:
		Buttons _b;
		Format _f;
	public:		
		/**
		 * @brief Constructeur
		 * 
		 */
		Interface();
		/**
		 * @brief Constructeur
		 * 
		 */
		Interface(Buttons b, Format f);

		Buttons getButtons();
		Format getFormat();

};

#endif