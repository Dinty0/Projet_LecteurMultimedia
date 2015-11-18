/**
 * @file BoutonZoom.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe BoutonZoom, générant les boutons type "zoom"
 */

#ifndef BOUTONZOOM_H
#define BOUTONZOOM_H

#include "BoutonsI.hpp"

class BoutonZoom : public BoutonsI
{
	public:
		/**
		 * @brief Crée le bouton "Zoom"
		 *
		 */
		void creer();
};

#endif