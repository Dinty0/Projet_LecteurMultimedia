/**
 * @file audio.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe Audio, contenant les méthodes applicables à un audio
 */

#ifndef AUDIO_H
#define AUDIO_H

#include "etatA.hpp"
#include "etatArretA.hpp"
#include "etatLectureA.hpp"
#include "etatPauseA.hpp"

class Audio
{
	private:
		//...
		EtatA* _etatCourant;
		EtatArretA _etatArret;
		EtatLectureA _etatLecture;
		EtatPauseA _etatPause;
	public:
		/**
		 * @brief Constructeur
		 * 
		 */
		Audio();

		/**
		 * @brief Accesseur EtatCourant
		 * 
		 * @return EtatA : l'état courant de l'audio
		 */
		EtatA* getEtatCourant();

		/**
		 * @brief Accesseur EtatLecture
		 * 
		 * @return EtatLectureA* : pointeur sur l'état lecture de l'audio
		 */
		EtatLectureA* getEtatLecture();

		/**
		 * @brief Accesseur EtatPause
		 * 
		 * @return EtatPauseA* : pointeur sur l'état pause de l'audio
		 */
		EtatPauseA* getEtatPause();

		/**
		 * @brief Accesseur EtatArret
		 * 
		 * @return EtatArretA* : pointeur sur l'état arret de l'audio
		 */
		EtatArretA* getEtatArret();

		/**
		 * @brief Mutateur Etat
		 * 
		 * @param EtatA ea : le nouvel etat de l'audio
		 */
		void setEtat(EtatA* ea);

		/**
		 * @brief utiliserBoutonLecture : selon l'état passe l'audio dans l'état lecture
		 * 
		 */
		void utiliserBoutonLecture();

		/**
		 * @brief utiliserBoutonStop : selon l'etat, passe l'audio dans l'état arret
		 * 
		 */
		void utiliserBoutonStop();

		/**
		 * @brief utiliserBoutonPause : selon l'etat, effectue l'action du bouttonpause
		 * 
		 */
		void utiliserBoutonPause();

};

#endif