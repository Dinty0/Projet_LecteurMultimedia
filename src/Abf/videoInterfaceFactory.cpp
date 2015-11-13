#include "videoInterfaceFactory.hpp"
#include "interface.hpp"

Interface VideoInterfaceFactory::createInterface(ButtonsVA bva, FormatBig fb)
{
	// Création des boutons
	ButtonPl bpl();
	ButtonPa bpa();
	ButtonSt bst();
	ButtonsVA bva(bpl,bpa,bst);
	vector<library::buttons> b = bva.createButtons();

	// Création du format
	FormatBig fb();
	Format f = fb.createFormat();
	Interface i(bva,f);
	return i;
}