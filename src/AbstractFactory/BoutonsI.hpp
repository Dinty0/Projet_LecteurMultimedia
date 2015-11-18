/**
 * @file BoutonsI.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe BoutonsI, générant tous les boutons utile pour une image
 */

#ifndef BOUTONSI_H
#define BOUTONSI_H

#include "Boutons.hpp"
#include <vector>
#include "../include/SFGUI/Button.hpp"

class BoutonsI : public Boutons
{		
	public:
		/**
		 * @brief Fonction abstraite qui force les classes filles a implémenter une fonction "creer"
		 *
		 */
		virtual void creer()=0;
};

#endif
