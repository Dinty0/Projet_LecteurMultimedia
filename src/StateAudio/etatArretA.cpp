#include "etatArretA.hpp"
#include "audio.hpp"

EtatArretA::EtatArretA()
{}

EtatArretA::EtatArretA(Audio* a)
{
	_audio = a;
}

void EtatArretA::utiliserBoutonLectureA()
{
	_audio->setEtat(_audio->getEtatLecture());
}

void EtatArretA::afficherA()
{
	std::cout << "Audio arrêtée." << std::endl;
}
