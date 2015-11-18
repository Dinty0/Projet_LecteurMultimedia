#include "etatArretV.hpp"
#include "video.hpp"

EtatArretV::EtatArretV(){}

EtatArretV::EtatArretV(Video* v)
{
	_video = v;
}

void EtatArretV::utiliserBoutonLectureV()
{
	_video->setEtat(_video->getEtatLecture());
}

void EtatArretV::afficherV()
{
	std::cout << "Video arrêtée." << std::endl;
}
