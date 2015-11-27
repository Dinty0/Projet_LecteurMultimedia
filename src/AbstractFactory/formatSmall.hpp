/**
 * @file formatSmall.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe FormatSmall, permettant de créer le format "petit"
 */

#ifndef FORMATSMALL_H
#define FORMATSMALL_H

#include "format.hpp"

class FormatSmall : public Format
{
	private:
		int _longueurLecteur;
		int _largeurLecteur;
		sf::RenderWindow* _window;
	public:
		
		/**
		 * @brief Constructeur
		 * 
		 */
		FormatSmall();

		/**
		 * @brief Crée le format petit
		 * @return Un Format
		 *
		 */
		void createFormat();

		/**
		 * @brief Accesseur longueur
		 * @return Retourne la longueur de la fenetre
		 */
		int getLongueur();

		/**
		 * @brief Accesseur largeur
		 * @return Retourne la largeur de la fenetre
		 */
		int getLargeur();

		/**
		 * @brief Accesseyr fenetre
		 * @return Retourne la fenetre de type RenderWindow
		 */
		sf::RenderWindow* getWindow();
};

#endif