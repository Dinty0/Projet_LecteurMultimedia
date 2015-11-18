/**
 * @file etatA.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe EtatA (abstraite), contenant les méthodes applicables à un audio
 */

#ifndef ETATA_H
#define ETATA_H

#include <iostream>

class Audio;

class EtatA
{
	public:

		/**
		 * @brief utiliserBoutonStopA : selon l'etat, effectue l'action du bouttonstop
		 * 
		 */
		virtual void utiliserBoutonStopA(){}

		/**
		 * @brief utiliserBoutonPauseA : selon l'etat, effectue l'action du bouttonpause
		 * 
		 */
		virtual void utiliserBoutonPauseA(){}

		/**
		 * @brief utiliserBoutonLectureA : selon l'etat, effectue l'action du bouttonlecture
		 * 
		 */
		virtual void utiliserBoutonLectureA(){}

		/**
		 * @brief afficherA : selon l'etat, affiche l'état de l'audio
		 * 
		 */
		virtual void afficherA()=0;
};

#endif