#include "etatPauseA.hpp"
#include "../AbstractFactory/audio.hpp"

EtatPauseA::EtatPauseA(){}

EtatPauseA::EtatPauseA(Audio* a)
{
	_audio = a;
}

void EtatPauseA::utiliserBoutonStopA(sf::Sound* sound)
{
	sound->stop();
	_audio->setEtat(_audio->getEtatArret());
}

void EtatPauseA::utiliserBoutonLectureA(sf::Sound* sound)
{
	sound->play();
	_audio->setEtat(_audio->getEtatLecture());
}

void EtatPauseA::afficherA()
{
	std::cout << "Audio en pause." << std::endl;
}
