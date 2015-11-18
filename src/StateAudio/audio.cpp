#include "audio.hpp"

Audio::Audio()
{
	_etatCourant = _etatArret;
}

EtatA* Audio::getEtatCourantA()
{
	return _etatCourant;
}

EtatLectureA* Audio::getEtatLectureA()
{
	return _etatLecture;
}

EtatPauseA* Audio::getEtatPauseA()
{
	return _etatPause;
}

EtatArretA* Audio::getEtatArretA()
{
	return _etatArret;
}

void Audio::setEtatA(EtatA* ea)
{
	std::cout << "se1" << std::endl;
	_etatCourant = ea;
	std::cout << "se2" << std::endl;
	_etatCourant->afficherA();
	std::cout << "se3" << std::endl;
}