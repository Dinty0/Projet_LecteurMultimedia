#include "videoInterfaceFactory.hpp"

#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>

Interface VideoInterfaceFactory::createInterface(Buttons* b, Format* f)
{
	// Création du format
	f->createFormat();

	// Création des boutons
	tgui::Gui* gui = new tgui::Gui(*(f->getWindow()));
	gui->setGlobalFont("src/fonts/DejaVuSans.ttf");

	b->createButtons(gui);

	Interface i(b,f,gui);
	return i;
}