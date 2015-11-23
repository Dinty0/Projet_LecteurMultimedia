/**
 * @file etatV.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe EtatV (abstraite), contenant les méthodes applicables à une vidéo
 */

#ifndef ETATV_H
#define ETATV_H

#include <iostream>
#include <sfeMovie/Movie.hpp>

class Video;

class EtatV
{
	public:

		/**
		 * @brief utiliserBoutonStopV : selon l'etat, effectue l'action du bouttonstop
		 * 
		 */
		virtual void utiliserBoutonStopV(sfe::Movie* movie){}

		/**
		 * @brief utiliserBoutonPauseV : selon l'etat, effectue l'action du bouttonpause
		 * 
		 */
		virtual void utiliserBoutonPauseV(sfe::Movie* movie){}

		/**
		 * @brief utiliserBoutonLectureV : selon l'etat, effectue l'action du bouttonlecture
		 * 
		 */
		virtual void utiliserBoutonLectureV(sfe::Movie* movie){}

		/**
		 * @brief afficherV : selon l'etat, affiche l'état de la vidéo
		 * 
		 */
		virtual void afficherV()=0;
};

#endif