#include "imageInterfaceFactory.hpp"
#include "interface.hpp"

Interface ImageInterfaceFactory::createInterface()
{
	// Création des boutons
	ButtonNI bni();
	ButtonPI bpi();
	ButtonsI bi(bni,bpi);
	vector<library::buttons> b = bi.createButtons();

	// Création du format
	FormatBig fb();
	Format f = fb.createFormat();
	Interface i(bva,f);
	return i;
}