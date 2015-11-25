#include "etatArretV.hpp"
#include "../video.hpp"

EtatArretV::EtatArretV(){}

EtatArretV::EtatArretV(Video* v)
{
	_video = v;
}

void EtatArretV::utiliserBoutonLectureV(sfe::Movie* movie)
{
	_video->setEtat(_video->getEtatLecture());
	movie->play();
}

void EtatArretV::afficherV()
{
	std::cout << "Video arrêtée." << std::endl;
}
