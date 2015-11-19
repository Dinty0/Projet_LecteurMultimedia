#include "audioInterfaceFactory.hpp"

Interface AudioInterfaceFactory::createInterface(Buttons* b, Format* f)
{
	// Création du format
	f->createFormat();

	// Création des boutons

	tgui::Gui gui(*(f->getWindow()));
	tgui::Gui* pgui = &gui;

	b->createButtons(pgui);

	Interface i(b,f,pgui);
	return i;
}