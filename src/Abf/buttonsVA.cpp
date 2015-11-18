#include "buttonsVA.hpp"

ButtonsVA::ButtonsVA(ButtonPl bpl, ButtonPa bpa, ButtonSt bst)
{
	_bpl = bpl;
	_bpa = bpa;
	_bst = bst;
}

ButtonPl ButtonsVA::getButtonPl() { return _bpl; }
ButtonPa ButtonsVA::getButtonPa() { return _bpa; }
ButtonSt ButtonsVA::getButtonSt() { return _bst; }

std::vector<tgui::Button> ButtonsVA::createButtons() 
{
	
	ButtonPl bpl();
	ButtonPa bpa();
	ButtonSt bst();
	std::vector<library::buttons> bva;
	bva[0] = _bpl;
	bva[1] = _bpa;
	bva[2] = _bst;

	return bva;
}