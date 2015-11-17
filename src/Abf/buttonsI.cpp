#include "buttonsI.hpp"
#include "buttonNI.hpp"
#include "buttonPI.hpp"

ButtonsI::ButtonsI(ButtonNI bni, ButtonPI bpi)
{
	_bni = bni;
	_bpi = bpi;
}

ButtonNI ButtonsI::getButtonNI() { return _bni; }
ButtonPI ButtonsI::getButtonPI() { return _bpi; }

std::vector<tgui::Button> ButtonsI::createButtons() 
{
	std::vector<library::buttons> bi;
	bva[0] = _bni;
	bva[1] = _bpi;
}