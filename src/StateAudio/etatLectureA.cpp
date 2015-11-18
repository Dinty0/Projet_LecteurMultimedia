#include "etatLectureA.hpp"
#include "audio.hpp"

EtatLectureA::EtatLectureA(){}

EtatLectureA::EtatLectureA(Audio* a)
{
	_audio = a;
}

void EtatLectureA::utiliserBoutonStopA()
{
	_audio->setEtat(_audio->getEtatArret());
}

void EtatLectureA::utiliserBoutonPauseA()
{
	_audio->setEtat(_audio->getEtatPause());
}

void EtatLectureA::afficherA()
{
	std::cout << "Audio en lecture..." << std::endl;
}
