/**
 * @file buttons.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Interface Buttons, permettant de créer les boutons adéquats selon le type de média
 */

#ifndef BUTTONS_H
#define BUTTONS_H

#include <vector>

class Buttons
{
	public:
		/*
		 * @brief Crée les boutons adéquats selon le type de média
		 * @return Un vecteur de boutons
		 *
		 */
		virtual std::vector<tgui::Button> createButtons()=0;
};

#endif