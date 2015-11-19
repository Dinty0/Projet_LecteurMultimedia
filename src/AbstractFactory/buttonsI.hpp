/**
 * @file buttonsI.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe ButtonsI, héritant de Buttons, permettant de créer les boutons "image" nécessaire dans une interface 
 */

#ifndef BUTTONSI_H
#define BUTTONSI_H

#include "buttons.hpp"

#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>

class ButtonsI : public Buttons
{
	private:
		tgui::Button::Ptr _bni;
		tgui::Button::Ptr _bpi;
	public:

		/*
		 * @brief Constructeur
		 *
		 */
		ButtonsI();

		/*
		 * @brief Constructeur
		 *
		 */
		ButtonsI(tgui::Button::Ptr bni, tgui::Button::Ptr bpi);

		/*
		 * @brief Accesseur
		 * @return _bni, le BouttonNI
		 *
		 */
		tgui::Button::Ptr getButtonNI();

		/*
		 * @brief Accesseur
		 * @return _bpi, le BouttonPI
		 *
		 */
		tgui::Button::Ptr getButtonPI();

		tgui::Button::Ptr getButtonPl();
		tgui::Button::Ptr getButtonPa();
		tgui::Button::Ptr getButtonSt();
		
		/*
		 * @brief Crée les boutons de type "image" et les stockent dans un vecteur
		 * @return Un vecteur de boutons
		 *
		 */
		void createButtons(tgui::Gui gui);
};

#endif