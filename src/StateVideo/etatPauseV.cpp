#include "etatPauseV.hpp"

EtatPauseV::EtatPauseV(){}

EtatPauseV::EtatPauseV(Video* v)
{
	_video = v;
}

void EtatPauseV::utiliserBoutonStopV()
{
	// COMMANDE SFML/VLC STOP
}

void EtatPauseV::utiliserBoutonLectureV()
{
	// COMMANDE SFML/VLC REMETTRE LECTURE
}

void EtatPauseV::afficherV()
{
	std::cout << "Video dans l'état pause" << std::endl;
}
