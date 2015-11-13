/**
 * @file BoutonIS.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe BoutonIS, générant les boutons type "image suivante"
 */

#ifndef BOUTONIS_H
#define BOUTONIS_H

#include "BoutonsI.hpp"

class BoutonIS : public BoutonsI
{
	public:
		/**
		 * @brief Crée le bouton "Image suivante"
		 *
		 */
		void creer();
};

#endif

