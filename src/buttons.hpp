/**
 * @file buttons.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Interface Buttons, permettant de créer les boutons adéquats selon le type de média
 */

#ifndef BUTTONS_H
#define BUTTONS_H

#include "button.hpp"

#include <vector>
#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>

class Buttons
{
	public:
		/*
		 * @brief Crée les boutons adéquats selon le type de média
		 * @return Un vecteur de boutons
		 *
		 */
		std::vector<Button> createButtons();
};

#endif