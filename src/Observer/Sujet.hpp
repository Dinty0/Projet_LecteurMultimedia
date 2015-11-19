/**
 * @file Sujet.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe Sujet
 */

#ifndef SUJET_HPP
#define SUJET_HPP
#include "Observer.hpp"
#include <iostream>

class Observer;
class Sujet
{
	public:
			/*
			 * @brief Ajout un Observer
			 * @param l'observer à ajouter
			 * @return _retour 1 si l'observer a été ajouté
			 *
			 */
			virtual int enregistrerObs(Observer* o)=0;

			/*
			 * @brief Supprime un Observer
			 * @param l'observer à supprimer
			 * @return _retour 1 si l'observer a été trouvé et supprimé sinon -1
			 *
			 */
			virtual int supprimerObs(Observer* o)=0;

			/*
			 * @brief Notifie l'ensemble des observers ajoutés à au vecteur
			 *
			 */
			virtual void notifierObs()=0;

};

#endif