#include "audioInterfaceFactory.hpp"

#include "interface.hpp"

#include "buttonPl.hpp"
#include "buttonPa.hpp"
#include "buttonSt.hpp"
#include "buttonsVA.hpp"

#include "format.hpp"
#include "formatSmall.hpp"

#include <vector>

Interface AudioInterfaceFactory::createInterface(ButtonsVA bva, FormatSmall fs)
{
	// Création des boutons
	ButtonPl bpl();
	ButtonPa bpa();
	ButtonSt bst();
	ButtonsVA bva(bpl,bpa,bst);
	std::vector<tgui::Button> b = bva.createButtons();

	// Création du format
	FormatSmall fs();
	Format f = fs.createFormat();
	Interface i(bva,f);
	return i;
}