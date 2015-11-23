/**
 * @file etatLectureV.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe EtatLectureV, qui implémente les méthodes applicables à une vidéo dans l'état lecture
 */

#ifndef ETATLECTUREV_H
#define ETATLECTUREV_H

#include "etatV.hpp"

class EtatLectureV : public EtatV
{
	private:
		Video* _video;

	public:
		/**
		 * @brief Constructeur
		 * 
		 */
		EtatLectureV();

		/**
		 * @brief Constructeur
		 *
		 * @param Video* a : pointeur vers video 
		 */
		EtatLectureV(Video* a);

		/**
		 * @brief utiliserBoutonStopV : passe la video dans l'état stop
		 * 
		 */
		void utiliserBoutonStopV(sfe::Movie* movie);

		/**
		 * @brief utiliserBoutonPauseV : passe la video dans l'état pause
		 * 
		 */
		void utiliserBoutonPauseV(sfe::Movie* movie);

		/**
		 * @brief afficherV : affiche l'état lecture
		 * 
		 */
		void afficherV();
};

#endif