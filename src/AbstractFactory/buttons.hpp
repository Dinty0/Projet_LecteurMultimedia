/**
 * @file buttons.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Interface Buttons, permettant de créer les boutons adéquats selon le type de média
 */

#ifndef BUTTONS_H
#define BUTTONS_H

#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>

class Buttons
{
	public:

		/**
		 * @brief Crée les boutons adéquats selon le type de média
		 * @return Un vecteur de boutons
		 *
		 */
		virtual void createButtons(tgui::Gui* gui)=0;

		/**
		 * @brief Accesseur virtuel
		 * @return _bni, le BouttonNI (next image).
		 *
		 */
		virtual tgui::Button::Ptr getButtonNI()=0;

		/**
		 * @brief Accesseur virtuel
		 * @return _bpi, le BouttonPI (previous image).
		 *
		 */
		virtual tgui::Button::Ptr getButtonPI()=0;

		/**
		 * @brief Accesseur virtuel
		 * @return _bpl, le BouttonPl (play)
		 *
		 */
		virtual tgui::Button::Ptr getButtonPl()=0;

		/**
		 * @brief Accesseur virtuel
		 * @return _bpa, le BouttonPa (stop)
		 *
		 */
		virtual tgui::Button::Ptr getButtonPa()=0;
		
		/**
		 * @brief Accesseur virtuel
		 * @return _bst, le BouttonSt (pause)
		 *
		 */
		virtual tgui::Button::Ptr getButtonSt()=0;
};

#endif