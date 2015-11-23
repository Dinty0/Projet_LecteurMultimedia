#include "etatLectureA.hpp"
#include "../AbstractFactory/audio.hpp"

EtatLectureA::EtatLectureA(){}

EtatLectureA::EtatLectureA(Audio* a)
{
	_audio = a;
}

void EtatLectureA::utiliserBoutonStopA(sf::Sound* sound)
{
	sound->stop();
	_audio->setEtat(_audio->getEtatArret());
}

void EtatLectureA::utiliserBoutonPauseA(sf::Sound* sound)
{
	sound->pause();
	_audio->setEtat(_audio->getEtatPause());
}

void EtatLectureA::afficherA()
{
	std::cout << "Audio en lecture..." << std::endl;
}
