#include "formatBig.hpp"

FormatBig::FormatBig()
{
	_longueurLecteur = 1200;
	_largeurLecteur = 1080;
}

FormatBig FormatBig::createFormat()
{
	//Use library with _lo,_la
}

int FormatBig::getLongueur()
{
	return _longueurLecteur;
}

int FormatBig::getLargeur()
{
	return _largeurLecteur;
}