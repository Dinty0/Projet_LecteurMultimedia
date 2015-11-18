#include "etatPauseA.hpp"
#include "audio.hpp"

EtatPauseA::EtatPauseA(){}

EtatPauseA::EtatPauseA(Audio* a)
{
	_audio = a;
}

void EtatPauseA::utiliserBoutonStopA()
{
	_audio->setEtat(_audio->getEtatArret());
}

void EtatPauseA::utiliserBoutonLectureA()
{
	_audio->setEtat(_audio->getEtatLecture());
}

void EtatPauseA::afficherA()
{
	std::cout << "Audio en pause." << std::endl;
}
