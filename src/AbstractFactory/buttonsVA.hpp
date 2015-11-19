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
		/*
		 * @brief Constructeur
		 *
		 */
		ButtonsVA();
		/*
		 * @brief Constructeur
		 *
		 */
		ButtonsVA(tgui::Button::Ptr bpl, tgui::Button::Ptr bpa, tgui::Button::Ptr bst);

		/*
		 * @brief Accesseur
		 * @return _bpl, le BouttonPl
		 *
		 */
		tgui::Button::Ptr getButtonPl();

		/*
		 * @brief Accesseur
		 * @return _bpa, le BouttonPa
		 *
		 */
		tgui::Button::Ptr getButtonPa();

		/*
		 * @brief Accesseur
		 * @return _bst, le BouttonSt
		 *
		 */
		tgui::Button::Ptr getButtonSt();

		tgui::Button::Ptr getButtonPI();
		tgui::Button::Ptr getButtonNI();
		
		/*
		 * @brief Crée les boutons de type "video / audio" et les stockent dans un vecteur
		 * @return Un vecteur de boutons
		 *
		 */
		void createButtons(tgui::Gui* gui);
};

#endif