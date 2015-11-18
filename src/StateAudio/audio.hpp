/**
 * @file audio.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe Audio, contenant les méthodes applicables à un audio
 */

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
		 * @return EtatA : l'état lecture de l'audio
		 */
		EtatLectureA* getEtatLecture();

		/**
		 * @brief Accesseur EtatPause
		 * 
		 * @return EtatA : l'état pause de l'audio
		 */
		EtatPauseA* getEtatPause();

		/**
		 * @brief Accesseur EtatArret
		 * 
		 * @return EtatA : l'état arret de l'audio
		 */
		EtatArretA* getEtatArret();

		/**
		 * @brief Mutateur Etat
		 * 
		 * @param EtatA ea : le nouvel etat de l'audio
		 */
		void setEtat(EtatA* ea);

		/**
		 * @brief utiliserBoutonLectureA : selon l'état passe la video dans l'état lecture
		 * 
		 */
		void utiliserBoutonLecture();

		/**
		 * @brief utiliserBoutonStopA : selon l'etat, effectue l'action du bouttonstop
		 * 
		 */
		void utiliserBoutonStop();

		/**
		 * @brief utiliserBoutonPauseA : selon l'etat, effectue l'action du bouttonpause
		 * 
		 */
		void utiliserBoutonPause();

};