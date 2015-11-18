/**
 * @file BoutonLec.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe BoutonLec, générant les boutons type "lecture"
 */

#ifndef BOUTOLNEC_H
#define BOUTONLEC_H

#include "BoutonsVA.hpp"

class BoutonLec : public BoutonsVA
{
	public:
		/**
		 * @brief Crée le bouton "Lecture"
		 *
		 */
		void creer();
};

#endif