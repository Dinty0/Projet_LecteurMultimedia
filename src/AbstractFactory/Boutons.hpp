/**
 * @file Boutons.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe Boutons (interface), super-classe de BoutonsVA et BoutonsI 
 */


#ifndef BOUTONS_H
#define BOUTONS_H

class Boutons
{	
	public:
		/**
		 * @brief Fonction abstraite qui force les classes filles a implémenter une fonction "creer"
		 *
		 */
		virtual void creer()=0;
};

#endif