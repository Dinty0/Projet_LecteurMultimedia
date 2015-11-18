#include "etatPauseV.hpp"
#include "video.hpp"

EtatPauseV::EtatPauseV(){}

EtatPauseV::EtatPauseV(Video* v)
{
	_video = v;
}

void EtatPauseV::utiliserBoutonStopV()
{
	_video->setEtat(_video->getEtatArret());
}

void EtatPauseV::utiliserBoutonLectureV()
{
	_video->setEtat(_video->getEtatLecture());
}

void EtatPauseV::afficherV()
{
	std::cout << "Video en pause." << std::endl;
}
