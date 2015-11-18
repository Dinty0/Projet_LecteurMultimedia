/**
 * @file BoutonStop.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe BoutonStop, générant les boutons type "stop"
 */

#ifndef BOUTONSTOP_H
#define BOUTONSTOP_H

#include "BoutonsVA.hpp"

class BoutonStop : public BoutonsVA
{
	public:
		/**
		 * @brief Crée le bouton "Stop"
		 *
		 */
		void creer();
};

#endif