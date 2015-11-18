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

EtatA* Audio::getEtatCourantA()
{
	return _etatCourant;
}

EtatLectureA* Audio::getEtatLectureA()
{
	return &_etatLecture;
}

EtatPauseA* Audio::getEtatPauseA()
{
	return &_etatPause; 
}

EtatArretA* Audio::getEtatArretA()
{
	return &_etatArret;
}

void Audio::setEtatA(EtatA* ea)
{
	_etatCourant = ea;
	_etatCourant->afficherA();
}