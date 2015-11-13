#include "buttonsI.hpp"

ButtonsI::ButtonsI(ButtonNI bni, ButtonPI bpi)
{
	_bni = bni;
	_bpi = bpi;
}

ButtonNI ButtonsI::getButtonNI() { return _bni; }
ButtonPI ButtonsI::getButtonPI() { return _bpi; }

vector<library::buttons> ButtonsI::createButtons() 
{
	vector<library::buttons> bi;
	bva[0] = _bni;
	bva[1] = _bpi;
}