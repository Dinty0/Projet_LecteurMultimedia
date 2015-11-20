/**
 * @file etatArretV.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe EtatArretV, qui implémente les méthodes applicables à une vidéo dans l'état arret
 */

#ifndef ETATARRETV_H
#define ETATARRETV_H

#include "etatV.hpp"

class EtatArretV : public EtatV
{
	private:
		Video* _video;

	public:
		/**
		 * @brief Constructeur
		 * 
		 */
		EtatArretV();
		/**
		 * @brief Constructeur
		 * 
		 * @param Video* v : pointeur vers video
		 */
		EtatArretV(Video* v);

		/**
		 * @brief utiliserBoutonLectureV : passe la video dans l'état lecture
		 * 
		 */
		void utiliserBoutonLectureV();

		/**
		 * @brief afficherV : afficher l'état arret
		 * 
		 */
		void afficherV();
};

#endif