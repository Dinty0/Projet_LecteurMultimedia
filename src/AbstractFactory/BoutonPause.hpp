/**
 * @file BoutonIP.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe BoutonPause, générant les boutons type "pause"
 */

#ifndef BOUTONPAUSE_H
#define BOUTONPAUSE_H

#include "BoutonsVA.hpp"

class BoutonPause : public BoutonsVA
{
	public:
		BoutonPause();
		void creer();
};

#endif