/**
 * @file formatBig.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe FormatBig, permettant de créer le format "grand"
 */

#ifndef FORMATBIG_H
#define FORMATBIG_H

#include "format.hpp"

class FormatBig : public Format
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
		FormatBig();

		/*
		 * @brief Crée le format grand
		 * @return Un Format
		 *
		 */
		void createFormat();

		int getLongueur();
		int getLargeur();
		sf::RenderWindow* getWindow();
};

#endif