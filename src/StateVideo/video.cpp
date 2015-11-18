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

EtatV* Video::getEtatCourant()
{
	return _etatCourant;
}

EtatLectureV* Video::getEtatLecture()
{
	return &_etatLecture;
}

EtatPauseV* Video::getEtatPause()
{
	return &_etatPause; 
}

EtatArretV* Video::getEtatArret()
{
	return &_etatArret;
}

void Video::setEtat(EtatV* ev)
{
	_etatCourant = ev;
	_etatCourant->afficherV();
}

void Video::utiliserBoutonLecture()
{
	_etatCourant->utiliserBoutonLectureV();
}

void Video::utiliserBoutonPause()
{
	_etatCourant->utiliserBoutonPauseV();
}

void Video::utiliserBoutonStop()
{
	_etatCourant->utiliserBoutonStopV();
}