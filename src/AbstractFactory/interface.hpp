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
#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>

class Interface
{
	private:
		Buttons* _b;
		Format* _f;
		tgui::Gui* _gui;
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
		Interface(Buttons* b, Format* f, tgui::Gui* gui);

		Buttons* getButtons();
		Format* getFormat();
		tgui::Gui* getGui();

};

#endif