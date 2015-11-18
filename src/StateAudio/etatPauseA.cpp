#include "etatPauseA.hpp"

EtatPauseA::EtatPauseA(){}

EtatPauseA::EtatPauseA(Audio* a)
{
	_audio = a;
}

void EtatPauseA::utiliserBoutonStopA()
{
	// COMMANDE SFML/VLC STOP
}

void EtatPauseA::utiliserBoutonLectureA()
{
	// COMMANDE SFML/VLC REMETTRE LECTURE
}

void EtatPauseA::afficherA()
{
	std::cout << "Audio dans l'état pause." << std::endl;
}
