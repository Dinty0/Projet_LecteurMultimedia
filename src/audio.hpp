#include "AbstractFactory/audioInterfaceFactory.hpp"
#include "Dir/Dir.hpp"

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>
#include <sfeMovie/Movie.hpp>

#include "StateAudio/etatA.hpp"
#include "StateAudio/etatArretA.hpp"
#include "StateAudio/etatLectureA.hpp"
#include "StateAudio/etatPauseA.hpp"

class Audio
{
	private:
		Interface _i;
		Dir _dir;

		EtatA* _etatCourant;
		EtatArretA _etatArret;
		EtatLectureA _etatLecture;
		EtatPauseA _etatPause;

	public:

		/**
		 * @brief Constructeur
		 * 
		 * @param AudioInterfaceFactory* aiFact : factory de l'interface audio
		 */
		Audio(AudioInterfaceFactory* aiFact);

		/**
		 * @brief Destructeur
		 * 
		 */
		~Audio();
		
		/**
		 * @brief fonction de test de création
		 * 
		 */
		void afficher();
		
		/**
		 * @brief lance l'audio et permet a l'utilisateur d'effectuer des actions dessus.
		 * 
		 */
		void run();
		
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
		 * @brief selon l'état passe l'audio dans l'état lecture
		 * 
		 */
		void utiliserBoutonLecture(sf::Sound* sound);

		/**
		 * @brief  selon l'etat, passe l'audio dans l'état arret
		 * 
		 */
		void utiliserBoutonStop(sf::Sound* sound);

		/**
		 * @brief selon l'etat, effectue l'action du bouttonpause
		 * 
		 */
		void utiliserBoutonPause(sf::Sound* sound);

};