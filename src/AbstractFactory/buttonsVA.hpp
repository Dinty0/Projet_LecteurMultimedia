/**
 * @file buttonsVA.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe ButtonsVA, permettant de créer les boutons de type "video / audio" nécessaires dans une interface
 */

#ifndef BUTTONSVA_H
#define BUTTONSVA_H

#include "buttons.hpp"

#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>

class ButtonsVA : public Buttons
{
	private:
		tgui::Button::Ptr _bpl;
		tgui::Button::Ptr _bpa;
		tgui::Button::Ptr _bst;
	public:

		/**
		 * @brief Constructeur par défaut
		 *
		 */
		ButtonsVA();

		/**
		 * @brief Constructeur
		 * @param un bouton play, un bouton stop et un bouton pause. De type pointeur de boutons
		 */
		ButtonsVA(tgui::Button::Ptr bpl, tgui::Button::Ptr bpa, tgui::Button::Ptr bst);

		/**
		 * @brief Accesseur
		 * @return _bpl, le BouttonPl (play)
		 *
		 */
		tgui::Button::Ptr getButtonPl();

		/**
		 * @brief Accesseur
		 * @return _bpa, le BouttonPa (stop)
		 *
		 */
		tgui::Button::Ptr getButtonPa();

		/**
		 * @brief Accesseur
		 * @return _bst, le BouttonSt (pause)
		 *
		 */
		tgui::Button::Ptr getButtonSt();

		/**
		 * @brief Accesseur
		 * @return _bpi, le BouttonPI (previous image). Boutton pas construit dans cette classe.
		 *
		 */
		tgui::Button::Ptr getButtonPI();

		/**
		 * @brief Accesseur
		 * @return _bni, le BouttonNI (next image). Boutton pas construit dans cette classe.
		 *
		 */
		tgui::Button::Ptr getButtonNI();
		
		/**
		 * @brief Crée les boutons de type "video / audio" et les stockent dans un vecteur
		 * @return Un vecteur de boutons
		 *
		 */
		void createButtons(tgui::Gui* gui);
};

#endif