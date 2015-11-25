#include "etatPauseV.hpp"
#include "../video.hpp"

EtatPauseV::EtatPauseV(){}

EtatPauseV::EtatPauseV(Video* v)
{
	_video = v;
}

void EtatPauseV::utiliserBoutonStopV(sfe::Movie* movie)
{
	movie->stop();
	_video->setEtat(_video->getEtatArret());
}

void EtatPauseV::utiliserBoutonLectureV(sfe::Movie* movie)
{
	movie->play();
	_video->setEtat(_video->getEtatLecture());
}

void EtatPauseV::afficherV()
{
	std::cout << "Video en pause." << std::endl;
}
