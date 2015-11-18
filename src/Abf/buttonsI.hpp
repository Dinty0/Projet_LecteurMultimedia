/**
 * @file buttonsI.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe ButtonsI, héritant de Buttons, permettant de créer les boutons "image" nécessaire dans une interface 
 */

#ifndef BUTTONSI_H
#define BUTTONSI_H

#include "buttons.hpp"
#include <vector>

class ButtonNI;
class ButtonPI;

class ButtonsI : public Buttons
{
	private:
		ButtonNI _bni;
		ButtonPI _bpi;
	public:

		/*
		 * @brief Constructeur
		 *
		 */
		ButtonsI();

		/*
		 * @brief Accesseur
		 * @return _bni, le BouttonNI
		 *
		 */
		ButtonNI getButtonNI();

		/*
		 * @brief Accesseur
		 * @return _bpi, le BouttonPI
		 *
		 */
		ButtonPI getButtonPI();
		
		/*
		 * @brief Crée les boutons de type "image" et les stockent dans un vecteur
		 * @return Un vecteur de boutons
		 *
		 */
		std::vector<tgui::Button> createButtons();
};

#endif