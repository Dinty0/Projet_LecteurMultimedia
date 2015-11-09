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

class BoutonsI : public Boutons
{		
	private:
		std::vector<sfg::Button*> _bi;
	public:
		BoutonsI();
		void creer();
};

#endif