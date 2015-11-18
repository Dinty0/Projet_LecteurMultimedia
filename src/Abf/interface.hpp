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

class Interface
{
	private:
		std::vector<tgui::Button> _b;
		Format _f;
	public:		
		
		/**
		 * @brief Constructeur
		 * 
		 */
		Interface(std::vector<tgui::Button> b, Format f);

};

#endif