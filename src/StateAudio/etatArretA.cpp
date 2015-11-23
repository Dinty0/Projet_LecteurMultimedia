#include "etatArretA.hpp"
#include "../AbstractFactory/audio.hpp"

EtatArretA::EtatArretA()
{}

EtatArretA::EtatArretA(Audio* a)
{
	_audio = a;
}

void EtatArretA::utiliserBoutonLectureA(sf::Sound* sound)
{
	sound->play();
	_audio->setEtat(_audio->getEtatLecture());
}

void EtatArretA::afficherA()
{
	std::cout << "Audio arrêtée." << std::endl;
}
