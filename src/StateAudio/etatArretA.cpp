#include "etatArretA.hpp"

EtatArretA::EtatArretA()
{}

EtatArretA::EtatArretA(Audio* a)
{
	_audio = a;
}

void EtatArretA::utiliserBoutonLectureA()
{
	// COMMANDE SFML/VLC 
}

void EtatArretA::afficherA()
{
	std::cout << "Audio dans l'état arret" << std::endl;
}
