#include "audio.hpp"

Audio::Audio()
{
	EtatArretA ea(this);
	EtatLectureA el(this);
	EtatPauseA ep(this);

	_etatArret = ea;
	_etatLecture = el;
	_etatPause = ep;
	_etatCourant = &(_etatArret);

}

EtatA* Audio::getEtatCourant()
{
	return _etatCourant;
}

EtatLectureA* Audio::getEtatLecture()
{
	return &_etatLecture;
}

EtatPauseA* Audio::getEtatPause()
{
	return &_etatPause; 
}

EtatArretA* Audio::getEtatArret()
{
	return &_etatArret;
}

void Audio::setEtat(EtatA* ea)
{
	_etatCourant = ea;
	_etatCourant->afficherA();
}

void Audio::utiliserBoutonLecture()
{
	_etatCourant->utiliserBoutonLectureA();
}

void Audio::utiliserBoutonPause()
{
	_etatCourant->utiliserBoutonPauseA();
}

void Audio::utiliserBoutonStop()
{
	_etatCourant->utiliserBoutonStopA();
}