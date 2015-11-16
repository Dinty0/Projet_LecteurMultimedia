/**
 * @file buttonsVA.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe ButtonsVA, permettant de créer les boutons de type "video / audio" nécessaires dans une interface
 */

#include "buttons.hpp"

class ButtonsVA : public Buttons
{
	public:
		ButtonPl _bpl;
		ButtonPa _bpa;
		ButtonSt _bst;
	private:
		/*
		 * @brief Constructeur
		 *
		 */
		ButtonsVA();

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
		vector<library::buttons> createButtons();
};