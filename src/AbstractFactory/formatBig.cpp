#include "formatBig.hpp"

FormatBig::FormatBig()
{
	_longueurLecteur =1000;
	_largeurLecteur = 800;
}

void FormatBig::createFormat()
{
	_window = new sf::RenderWindow(sf::VideoMode(_longueurLecteur,_largeurLecteur), "Grand format");
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