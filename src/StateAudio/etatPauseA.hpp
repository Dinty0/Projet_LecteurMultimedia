/**
 * @file etatPauseA.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe EtatPauseA, qui implémente les méthodes applicables à un audio dans l'état pause
 */


#include "etatA.hpp"

#ifndef ETATPAUSEA_H
#define ETATPAUSEA_H

class EtatPauseA : public EtatA
{
	private:
		Audio* _audio;

	public:
		/**
		 * @brief Constructeur
		 * 
		 */
		EtatPauseA();

		/**
		 * @brief Constructeur
		 * 
		 * @param Audio a : pointeur vers audio
		 */
		EtatPauseA(Audio* a);

		/**
		 * @brief utiliserBoutonStopA : passe l'audio dans l'état stop
		 * 
		 */
		void utiliserBoutonStopA();

		/**
		 * @brief utiliserBoutonLectureA : passe l'audio dans l'état lecture
		 * 
		 */
		void utiliserBoutonLectureA();

		/**
		 * @brief afficherA : affiche l'état pause
		 * 
		 */
		void afficherA();
};

#endif