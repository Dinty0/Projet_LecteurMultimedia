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
		 * @brief Constructeur par defaut
		 *
		 */
		ButtonsI();

	/*
		 * @brief Constructeur
		 * @param un bouton play, un bouton stop et un bouton pause. De type pointeur de boutons
		 */
		ButtonsI(tgui::Button::Ptr bni, tgui::Button::Ptr bpi);

		/*
		 * @brief Accesseur
		 * @return _bni, le BouttonNI (next image)
		 *
		 */
		tgui::Button::Ptr getButtonNI();

		/*
		 * @brief Accesseur
		 * @return _bpi, le BouttonPI (previous image)
		 *
		 */
		tgui::Button::Ptr getButtonPI();

		/*
		 * @brief Accesseur
		 * @return _bpl, le BouttonPl (play). Boutton pas construit dans cette classe.
		 *
		 */
		tgui::Button::Ptr getButtonPl();
		/*
		 * @brief Accesseur
		 * @return _bpa, le BouttonPa (stop). Boutton pas construit dans cette classe.
		 *
		 */
		tgui::Button::Ptr getButtonPa();
		/*
		 * @brief Accesseur
		 * @return _bst, le BouttonSt (pause). Boutton pas construit dans cette classe.
		 *
		 */
		tgui::Button::Ptr getButtonSt();
		
		/*
		 * @brief Crée les boutons de type "image" et les stockent dans un vecteur
		 * @return Un vecteur de boutons
		 *
		 */
		void createButtons(tgui::Gui* gui);
};

#endif