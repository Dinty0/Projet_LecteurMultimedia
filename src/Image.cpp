#include "Format.hpp"
#include "Image.hpp"
//#include

Image::Image()
{
	Image::creerMultimedia();
}

void Image::creerMultimedia()
{
	Image::creerBoutons();
	Image::creerFormat();
}
void Image::creerBoutons()
{
	_boutons[0] = BoutonIP bip();
	_boutons[1] = BoutonIS bis();
	_boutons[2] = BoutonZoom bz();
}

void Image::creerFormat()
{
	_format->creerGrandFormat();
}
