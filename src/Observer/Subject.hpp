/**
 * @file Sujet.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe Sujet (abstract)
 */

#ifndef SUBJECT_HPP
#define SUBJECT_HPP
#include "Observer.hpp"
#include <iostream>

class Observer;
class Subject
{
	public:
		/**
		 * @brief Ajout un Observer. Virtuel
		 * @param l'observer à ajouter
		 * @return _retour 1 si l'observer a été ajouté
		 *
		 */
		virtual int addObs(Observer* o)=0;

		/**
		 * @brief Supprime un Observer. Virtuel
		 * @param l'observer à supprimer
		 * @return _retour 1 si l'observer a été trouvé et supprimé sinon -1
		 *
		 */
		virtual int removeObs(Observer* o)=0;

		/**
		 * @brief Notifie l'ensemble des observers ajoutés à au vecteur. Virtuel
		 *
		 */
		virtual void notifyObs()=0;

};

#endif