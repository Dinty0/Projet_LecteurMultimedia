#include "Boutons.hpp"
#include "Format.hpp"

#include "Video.hpp"

Video::Video()
{
	Video::creerMultimedia();
}

void Video::creerMultimedia()
{
	Video::creerBoutons();
	Video::creerFormat();
}

/*
void Video::creerBoutons()
{
	BoutonLec blec();
	BoutonPause bp();
	BoutonStop bs();

	_boutons.push_back(blec);
	_boutons.push_back(bp);
	_boutons.push_back(bs);
}*/

void Video::creerFormat()
{
	_format->creerGrandFormat();
}