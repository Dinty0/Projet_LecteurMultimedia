#include "interface.hpp"

Interface::Interface()
{
	
}

Interface::Interface(Buttons b, Format f)
{
	_b = b;
	_f = f;
}

Buttons Interface::getButtons()
{
	return _b;
}

Format Interface::getFormat()
{
	return _f;
}