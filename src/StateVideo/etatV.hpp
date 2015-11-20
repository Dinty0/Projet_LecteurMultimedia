/**
 * @file etatV.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe EtatV (abstraite), contenant les méthodes applicables à une vidéo
 */

#ifndef ETATV_H
#define ETATV_H

#include <iostream>

class Video;

class EtatV
{
	public:

		/**
		 * @brief utiliserBoutonStopV : selon l'etat, effectue l'action du bouttonstop
		 * 
		 */
		virtual void utiliserBoutonStopV(){}

		/**
		 * @brief utiliserBoutonPauseV : selon l'etat, effectue l'action du bouttonpause
		 * 
		 */
		virtual void utiliserBoutonPauseV(){}

		/**
		 * @brief utiliserBoutonLectureV : selon l'etat, effectue l'action du bouttonlecture
		 * 
		 */
		virtual void utiliserBoutonLectureV(){}

		/**
		 * @brief afficherV : selon l'etat, affiche l'état de la vidéo
		 * 
		 */
		virtual void afficherV()=0;
};

#endif