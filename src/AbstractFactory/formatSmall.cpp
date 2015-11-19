#include "formatSmall.hpp"

FormatSmall::FormatSmall()
{
	_longueurLecteur = 200;
	_largeurLecteur = 100;
}

void FormatSmall::createFormat()
{
	sf::RenderWindow _window(sf::VideoMode(_longueurLecteur, _largeurLecteur), "Lecteur Image");
}

int FormatSmall::getLongueur()
{
	return _longueurLecteur;
}

int FormatSmall::getLargeur()
{
	return _largeurLecteur;
}

sf::RenderWindow FormatSmall::getWindow()
{
	return _window;
}