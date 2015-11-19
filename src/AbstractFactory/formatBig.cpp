#include "formatBig.hpp"

FormatBig::FormatBig()
{
	_longueurLecteur = 1200;
	_largeurLecteur = 1080;
}

void FormatBig::createFormat()
{
	sf::RenderWindow window(sf::VideoMode(_longueurLecteur, _largeurLecteur), "Lecteur Image");
	_window = &window;
}

int FormatBig::getLongueur()
{
	return _longueurLecteur;
}

int FormatBig::getLargeur()
{
	return _largeurLecteur;
}

sf::RenderWindow* FormatBig::getWindow()
{
	return _window;
}