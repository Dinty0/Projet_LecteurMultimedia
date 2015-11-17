/**
 * @file buttonsVA.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe ButtonsVA, permettant de créer les boutons de type "video / audio" nécessaires dans une interface
 */

#ifndef BUTTONSVA_H
#define BUTTONSVA_H

#include "buttons.hpp"
#include "button.hpp"
#include "buttonPl.hpp"
#include "buttonPa.hpp"
#include "buttonSt.hpp"

class ButtonsVA : public Buttons
{
	public:
		tgui::Button _bpl;
		tgui::Button _bpa;
		tgui::Button _bst;
	private:
		/*
		 * @brief Constructeur
		 *
		 */
		ButtonsVA(tgui::Button bpl, tgui::Button bpa, tgui::Button bst);

		/*
		 * @brief Accesseur
		 * @return _bpl, le BouttonPl
		 *
		 */
		ButtonPl getButtonPl();

		/*
		 * @brief Accesseur
		 * @return _bpa, le BouttonPa
		 *
		 */
		ButtonPa getButtonPa();

		/*
		 * @brief Accesseur
		 * @return _bst, le BouttonSt
		 *
		 */
		ButtonSt getButtonSt();
		
		/*
		 * @brief Crée les boutons de type "video / audio" et les stockent dans un vecteur
		 * @return Un vecteur de boutons
		 *
		 */
		std::vector<Button> createButtons();
};

#endif