#include "formatSmall.hpp"

FormatSmall::FormatSmall()
{
	_longueurLecteur = 600;
	_largeurLecteur = 200;
}

void FormatSmall::createFormat()
{
	_window = new sf::RenderWindow(sf::VideoMode(_longueurLecteur,_largeurLecteur), "Lecteur musique");
}
int FormatSmall::getLongueur()
{
	return _longueurLecteur;
}

int FormatSmall::getLargeur()
{
	return _largeurLecteur;
}

sf::RenderWindow* FormatSmall::getWindow()
{
	return _window;
}