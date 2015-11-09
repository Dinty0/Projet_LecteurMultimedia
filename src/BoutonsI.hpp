/**
 * @file BoutonsI.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe BoutonsI, générant tous les boutons utile pour une image
 */

#ifndef BOUTONSI_H
#define BOUTONSI_H

#include "Boutons.hpp"

class BoutonsI : public Boutons
{		
	private:
		vector<sfg::Button*> _bi;
	public:
		BoutonsI();
		void creer();
};

#endif