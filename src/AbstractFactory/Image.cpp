#include "Format.hpp"
#include "Image.hpp"
#include "BoutonIP.hpp"
#include "BoutonIS.hpp"
#include "BoutonZoom.hpp"
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
/*
void Image::creerBoutons()
{
	BoutonIP bip();
	BoutonIS bis();
	BoutonZoom bz();

	_boutons.push_back(bip);
	_boutons.push_back(bis);
	_boutons.push_back(bz);
}*/

void Image::creerFormat()
{
	_format->creerGrandFormat();
}
