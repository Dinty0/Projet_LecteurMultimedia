#include "formatSmall.hpp"

FormatSmall::FormatSmall()
{
	_longueurLecteur = 200;
	_largeurLecteur = 100;
}

Format* FormatSmall::createFormat()
{
	//Use library
}

int FormatSmall::getLongueur()
{
	return _longueurLecteur;
}

int FormatSmall::getLargeur()
{
	return _largeurLecteur;
}