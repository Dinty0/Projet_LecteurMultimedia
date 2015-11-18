#include "CreerMultimedia.hpp"
#include "LecteurMultimedia.hpp"

#include <iostream>


LecteurMultimedia::LecteurMultimedia()
{}

/*
Boutons LecteurMultimedia::getBoutons()
{
	return _boutons;
}

Format LecteurMultimedia::getFormat()
{
	return _format;
}
*/

void LecteurMultimedia::initialiser()
{
	_createur->creerMultimedia();
}

int main()
{
	std::cout << "compilé" << std::endl;
}

