/**
 * @file video.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe Video, contenant les méthodes applicables à une vidéo
 */

#ifndef VIDEO_H
#define VIDEO_H

#include "etatV.hpp"
#include "etatArretV.hpp"
#include "etatLectureV.hpp"
#include "etatPauseV.hpp"

class Video
{
	private:
		//...
		EtatV* _etatCourant;
		EtatArretV _etatArret;
		EtatLectureV _etatLecture;
		EtatPauseV _etatPause;
	public:
		/**
		 * @brief Constructeur
		 * 
		 */
		Video();
		EtatV* getEtatCourant();
		/**
		 * @brief Accesseur EtatLecture
		 * 
		 * @return EtatLectureVA* : pointeur sur l'état lecture de la vidéo
		 */
		EtatLectureV* getEtatLecture();

		/**
		 * @brief Accesseur EtatPause
		 * 
		 * @return EtatPauseV* : pointeur sur l'état pause de la vidéo
		 */
		EtatPauseV* getEtatPause();

		/**
		 * @brief Accesseur EtatArret
		 * 
		 * @return EtatArretV : pointeur sur l'état arret de la video
		 */
		EtatArretV* getEtatArret();

		/**
		 * @brief Mutateur Etat
		 * 
		 * @param EtatV ev : le nouvel etat de l'audio
		 */	
		void setEtat(EtatV* ev);

		/**
		 * @brief utiliserBoutonLecture : selon l'état passe la video dans l'état lecture
		 * 
		 */
		void utiliserBoutonLecture();

		/**
		 * @brief utiliserBoutonStop : selon l'etat, effectue l'action du bouttonstop
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