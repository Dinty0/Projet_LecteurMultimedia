#include "imageInterfaceFactory.hpp"

Interface ImageInterfaceFactory::createInterface(ButtonsI* bi, FormatBig* fb)
{
	// Création des boutons
	bi->createButtons();

	// Création du format
	fb->createFormat();
	Interface i(bi,fb);
	return i;
}