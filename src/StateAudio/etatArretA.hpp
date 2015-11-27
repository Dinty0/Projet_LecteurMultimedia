/**
 * @file etatArretA.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe EtatArretA, qui implémente les méthodes applicables à un audio dans l'état arret
 */

#ifndef ETATARRETA_H
#define ETATARRETA_H

#include "etatA.hpp"
 

class EtatArretA : public EtatA
{
	private:
		Audio* _audio;

	public:
		/**
		 * @brief Constructeur
		 * 
		 */
		EtatArretA();
		
		/**
		 * @brief Constructeur
		 * 
		 * @param Audio* a : pointeur vers audio
		 */
		EtatArretA(Audio* a);

		/**
		 * @brief utiliserBoutonLectureA : passe l'audio dans l'état lecture
		 * 
		 */
		void utiliserBoutonLectureA(sf::Sound* sound);

		/**
		 * @brief afficherA : afficher l'état arret
		 * 
		 */
		void afficherA();
};

#endif