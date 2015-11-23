/**
 * @file etatLectureA.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe EtatLectureA, qui implémente les méthodes applicables à un audio dans l'état lecture
 */

#ifndef ETATLECTUREA_H
#define ETATLECTUREA_H

#include "etatA.hpp"

class EtatLectureA : public EtatA
{
	private:
		Audio* _audio;

	public:
		/**
		 * @brief Constructeur
		 * 
		 */
		EtatLectureA();

		/**
		 * @brief Constructeur
		 *
		 * @param Audio* a : pointeur vers audio 
		 */
		EtatLectureA(Audio* a);

		/**
		 * @brief utiliserBoutonStopA : passe l'audio dans l'état stop
		 * 
		 */
		void utiliserBoutonStopA(sf::Sound* sound);

		/**
		 * @brief utiliserBoutonPauseA : passe l'audio dans l'état pause
		 * 
		 */
		void utiliserBoutonPauseA(sf::Sound* sound);

		/**
		 * @brief afficherA : affiche l'état lecture
		 * 
		 */
		void afficherA();
};

#endif