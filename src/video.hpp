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
		
		/**
		 * @brief Constructeur
		 * 
		 * @param VideoInterfaceFactory* viFact : factory de l'interface video
		 */
		Video(VideoInterfaceFactory* viFact);

		/**
		 * @brief Destructeur
		 * 
		 */
		~Video();
		
		/**
		 * @brief fonction de test de création
		 * 
		 */
		void afficher();

		/**
		 * @brief lance la vidéo et permet a l'utilisateur d'effectuer des actions dessus.
		 * 
		 */
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
		 * @brief selon l'état passe la video dans l'état lecture
		 * 
		 */
		void utiliserBoutonLecture(sfe::Movie* movie);

		/**
		 * @brief selon l'etat, effectue l'action du bouttonstop
		 * 
		 */
		void utiliserBoutonStop(sfe::Movie* movie);

		/**
		 * @brief selon l'etat, effectue l'action du bouttonpause
		 * 
		 */
		void utiliserBoutonPause(sfe::Movie* movie);


};