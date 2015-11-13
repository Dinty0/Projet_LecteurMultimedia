#include "buttons.hpp"

class ButtonsVA : public Buttons
{
	public:
		ButtonPl _bpl;
		ButtonPa _bpa;
		ButtonSt _bst;
	private:
		ButtonsVA();
		ButtonPl getButtonPl();
		ButtonPa getButtonPa();
		ButtonSt getButtonSt();
		vector<library::buttons> createButtons();
};