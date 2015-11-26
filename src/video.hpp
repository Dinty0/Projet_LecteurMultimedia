#include "AbstractFactory/videoInterfaceFactory.hpp"
#include "AbstractFactory/interface.hpp"

#include "StateVideo/etatV.hpp"
#include "StateVideo/etatArretV.hpp"
#include "StateVideo/etatLectureV.hpp"
#include "StateVideo/etatPauseV.hpp"
#include "Dir/Dir.hpp"

class Video
{
	private:
		Interface _i;

		EtatV* _etatCourant;
		EtatArretV _etatArret;
		EtatLectureV _etatLecture;
		EtatPauseV _etatPause;
		Dir _dir;
		//...
	public:
		
		Video();
		
		Video(VideoInterfaceFactory* viFact);
		
		void afficher();

		void run();

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
		 * @param prend un object de type Movie.
		 */
		void utiliserBoutonLecture(sfe::Movie* movie);

		/**
		 * @brief utiliserBoutonStop : selon l'etat, effectue l'action du bouttonstop
		 * @param prend un object de type Movie.
		 */
		void utiliserBoutonStop(sfe::Movie* movie);

		/**
		 * @brief utiliserBoutonPause : selon l'etat, effectue l'action du bouttonpause
		 * @param prend un object de type Movie.
		 */
		void utiliserBoutonPause(sfe::Movie* movie);


};
