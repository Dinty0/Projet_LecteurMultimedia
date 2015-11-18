/**
 * @file etatPauseV.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe EtatPauseV, qui implémente les méthodes applicables à une video dans l'état pause
 */

#ifndef ETATPAUSEV_H
#define ETATPAUSEV_H
 
#include "etatV.hpp"

class EtatPauseV : public EtatV
{
	private:
		Video* _video;

	public:

		/**
		 * @brief Constructeur
		 * 
		 */
		EtatPauseV();

		/**
		 * @brief Constructeur
		 * 
		 * @param Video v : pointeur vers video
		 */
		EtatPauseV(Video* v);

		/**
		 * @brief utiliserBoutonStopV : passe la video dans l'état stop
		 * 
		 */
		void utiliserBoutonStopV();

		/**
		 * @brief utiliserBoutonLectureV : passe la video dans l'état lecture
		 * 
		 */
		void utiliserBoutonLectureV();

		/**
		 * @brief afficherV : affiche l'état pause
		 * 
		 */
		void afficherV();
};

#endif