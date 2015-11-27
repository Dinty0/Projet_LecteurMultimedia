/**
 * @file format.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Interface Format, permettant de créer le format adéquat selon le type de média
 */

#ifndef FORMAT_H
#define FORMAT_H

#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>

class Format
{
	public:	

		/**
		 * @brief Crée le format adéquat selon le type de média
		 * @return Un Format
		 *
		 */
		virtual void createFormat()=0;

		/**
		 * @brief Getteur virtuel
		 * @return Retourne la longueur de la fenetre
		 */
		virtual int getLongueur()=0;

		/**
		 * @brief Getteur virtuel
		 * @return Retourne la largeur de la fenetre
		 */
		virtual int getLargeur()=0;
		
		/**
		 * @brief Getteur virtuel
		 * @return Retourne la fenetre de type RenderWindow
		 */
		virtual sf::RenderWindow* getWindow()=0;
};

#endif