#include "etatLectureV.hpp"
#include "video.hpp"

EtatLectureV::EtatLectureV(){}

EtatLectureV::EtatLectureV(Video* v)
{
	_video = v;
}

void EtatLectureV::utiliserBoutonStopV()
{
	_video->setEtat(_video->getEtatArret());
}

void EtatLectureV::utiliserBoutonPauseV()
{
	_video->setEtat(_video->getEtatPause());
}

void EtatLectureV::afficherV()
{
	std::cout << "Video en lecture..." << std::endl;
}
