#include "etatLectureV.hpp"

EtatLectureV::EtatLectureV(){}

EtatLectureV::EtatLectureV(Video* v)
{
	_video = v;
}

void EtatLectureV::utiliserBoutonStopV()
{
	// COMMANDE SFML/VLC Video AU DEBUT ARRETEE
}

void EtatLectureV::utiliserBoutonPauseV()
{
	// COMMANDE SMFL/VLC Video PAUSE
}

void EtatLectureV::afficherV()
{
	std::cout << "Video dans l'état lecture" << std::endl;
}
