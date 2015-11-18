#include "etatLectureA.hpp"

EtatLectureA::EtatLectureA(){}

EtatLectureA::EtatLectureA(Audio* a)
{
	_audio = a;
}

void EtatLectureA::utiliserBoutonStopA()
{
	// COMMANDE SFML/VLC AUDIO AU DEBUT ARRETEE
}

void EtatLectureA::utiliserBoutonPauseA()
{
	// COMMANDE SMFL/VLC AUDIO PAUSE
}

void EtatLectureA::afficherA()
{
	std::cout << "Audio dans l'état lecture" << std::endl;
}
