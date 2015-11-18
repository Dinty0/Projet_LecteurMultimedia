#include "videoInterfaceFactory.hpp"

#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>
VideoInterfaceFactory::VideoInterfaceFactory(){}

Interface VideoInterfaceFactory::createInterface(ButtonsVA bva, FormatBig fb)
{
	// Création des boutons
	bva.createButtons();

	// Création du format
	fb.createFormat();
	Interface i(bva,fb);
	return i;
}