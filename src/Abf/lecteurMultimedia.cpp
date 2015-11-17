#include "interfaceFactory.hpp"
#include "lecteurMultimedia.hpp"

#include <iostream>


LecteurMultimedia::LecteurMultimedia(Media m)
{
	Interface = m.interfaceFactory();
}

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

int main()
{
	std::cout << "compilé" << std::endl;
}

