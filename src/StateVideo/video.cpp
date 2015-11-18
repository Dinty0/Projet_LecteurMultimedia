#include "video.hpp"

Video::Video()
{
	EtatArretV ea(this);
	EtatLectureV el(this);
	EtatPauseV ep(this);

	_etatArret = ea;
	_etatLecture = el;
	_etatPause = ep;
	_etatCourant = &(_etatArret);

}

EtatV* Video::getEtatCourantV()
{
	return _etatCourant;
}

EtatLectureV* Video::getEtatLectureV()
{
	return &_etatLecture;
}

EtatPauseV* Video::getEtatPauseV()
{
	return &_etatPause; 
}

EtatArretV* Video::getEtatArretV()
{
	return &_etatArret;
}

void Video::setEtatV(EtatV* ea)
{
	_etatCourant = ea;
	_etatCourant->afficherV();
}