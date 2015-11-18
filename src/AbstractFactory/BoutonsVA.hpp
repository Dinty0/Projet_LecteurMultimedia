/**
 * @file BoutonsVA.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe BoutonsVA, générant tous les boutons utiles pour une video ou un audio
 */

#ifndef BOUTONSVA_H
#define BOUTONSVA_H

#include "Boutons.hpp"

class BoutonsVA : public Boutons
{
	public:
		/**
		 * @brief Fonction abstraite qui force les classes filles a implémenter une fonction "creer"
		 *
		 */
		virtual void creer()=0;
};

#endif