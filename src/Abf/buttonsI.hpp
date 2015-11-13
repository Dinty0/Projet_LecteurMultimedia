#include "buttons.hpp"

class ButtonsI : public Buttons
{
	private:
		ButtonNI _bni;
		ButtonPI _bpi;
	public:
		ButtonsI();
		ButtonNI getButtonNI();
		ButtonPI getButtonPI();
		vector<library::buttons> createButtons();
};