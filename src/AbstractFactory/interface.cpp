#include "interface.hpp"

Interface::Interface()
{
	
}

Interface::Interface(Buttons* b, Format* f, tgui::Gui* gui)
{
	_b = b;
	_f = f;
	_gui = gui;
}

Buttons* Interface::getButtons()
{
	return _b;
}

Format* Interface::getFormat()
{
	return _f;
}

tgui::Gui* Interface::getGui()
{
	return _gui;
}