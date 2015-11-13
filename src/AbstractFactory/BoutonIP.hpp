/**
 * @file BoutonIP.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe BoutonIP, générant les boutons type "image précédente"
 */

#ifndef BOUTONIP_H
#define BOUTONIP_H

#include "BoutonsI.hpp"

class BoutonIP : public BoutonsI
{
	public:
		/**
		 * @brief Crée le bouton "Image précédente"
		 *
		 */
		void creer();
};

#endif
