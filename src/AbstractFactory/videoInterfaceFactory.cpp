#include "videoInterfaceFactory.hpp"

#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>


VideoInterfaceFactory::VideoInterfaceFactory(){}

Interface VideoInterfaceFactory::createInterface(Buttons* b, Format* f)
{
	// Création des boutons
	std::cout << "creation butt" << std::endl;
	b->createButtons();

	// Création du format
	std::cout << "creation for" << std::endl;
	f->createFormat();

	std::cout << "creation Interface" << std::endl;
	Interface i(b,f);

	return i;
}