#include "formatBig.hpp"

FormatBig::FormatBig()
{
	_longueurLecteur = 800;
	_largeurLecteur = 600;
}

void FormatBig::createFormat()
{
	_window = new sf::RenderWindow(sf::VideoMode(_longueurLecteur,_largeurLecteur), "Lecteur Image");
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