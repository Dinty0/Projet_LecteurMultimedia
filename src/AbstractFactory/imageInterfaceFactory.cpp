#include "imageInterfaceFactory.hpp"

Interface ImageInterfaceFactory::createInterface(Buttons* b, Format* f)
{

	// Création du format
	f->createFormat();

	// Création des boutons
	tgui::Gui gui(f.getWindow());
	b->createButtons(tgui::Gui gui);

	Interface i(b,f);
	return i;
}