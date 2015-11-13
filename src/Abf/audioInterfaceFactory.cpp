#include "audioInterfaceFactory.hpp"
#include "interface.hpp"

Interface AudioInterfaceFactory::createInterface(ButtonsVA bva, FormatSmall fs)
{

	// Création des boutons
	ButtonPl bpl();
	ButtonPa bpa();
	ButtonSt bst();
	ButtonsVA bva(bpl,bpa,bst);
	vector<library::buttons> b = bva.createButtons();

	// Création du format
	FormatSmall fs();
	Format f = fs.createFormat();
	Interface i(bva,f);
	return i;
}