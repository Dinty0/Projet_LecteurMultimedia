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
void Video::creerBoutons()
{
	_boutons->creerBoutonsVA();
}

void Video::creerFormat()
{
	_format->creerGrandFormat();
}