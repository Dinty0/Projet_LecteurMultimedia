#include "videoInterfaceFactory.hpp"

#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>


VideoInterfaceFactory::VideoInterfaceFactory(){}

Interface VideoInterfaceFactory::createInterface(ButtonsVA* bva, FormatBig* fb)
{
	// Création des boutons
	std::cout << "creation butt" << std::endl;
	bva->createButtons();

	// Création du format
	std::cout << "creation for" << std::endl;
	fb->createFormat();

	std::cout << "creation Interface" << std::endl;
	Interface i(bva,fb);

	return i;
}