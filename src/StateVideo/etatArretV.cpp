#include "etatArretV.hpp"

EtatArretV::EtatArretV(){}

EtatArretV::EtatArretV(Video* v)
{
	_video = v;
}

void EtatArretV::utiliserBoutonLectureV()
{
	// COMMANDE SFML/VLC 
}

void EtatArretV::afficherV()
{
	std::cout << "Video dans l'état arret" << std::endl;
}
