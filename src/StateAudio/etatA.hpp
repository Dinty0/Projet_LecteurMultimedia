/**
 * @file etatA.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe EtatA (abstraite), contenant les méthodes applicables à un audio
 */

#ifndef ETATA_H
#define ETATA_H
#include <SFML/Audio.hpp>
#include <iostream>

class Audio;

class EtatA
{
	public:

		/**
		 * @brief utiliserBoutonStopA : selon l'etat, effectue l'action du bouttonstop
		 * 
		 */
		virtual void utiliserBoutonStopA(sf::Sound* sound){}

		/**
		 * @brief utiliserBoutonPauseA : selon l'etat, effectue l'action du bouttonpause
		 * 
		 */
		virtual void utiliserBoutonPauseA(sf::Sound* sound){}

		/**
		 * @brief utiliserBoutonLectureA : selon l'etat, effectue l'action du bouttonlecture
		 * 
		 */
		virtual void utiliserBoutonLectureA(sf::Sound* sound){}

		/**
		 * @brief afficherA : selon l'etat, affiche l'état de l'audio
		 * 
		 */
		virtual void afficherA()=0;
};

#endif