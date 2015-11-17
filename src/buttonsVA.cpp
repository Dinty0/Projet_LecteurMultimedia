#include "buttonsVA.hpp"

#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>

ButtonsVA::ButtonsVA()
{
	tgui::Gui gui(window);
    tgui::Callback callback;

    tgui::Button::Ptr buttonPlay(gui);
    buttonPlay->load(THEME_CONFIG_FILE);
    buttonPlay->setPosition(0, 0);
    buttonPlay->setText("Play");
    buttonPlay->setCallbackId(2);
    buttonPlay->bindCallback(tgui::Button::LeftMouseClicked);
    buttonPlay->setSize(100, 100);
    
	tgui::Button::Ptr buttonPause(gui);
    buttonPause->load(THEME_CONFIG_FILE);
    buttonPause->setPosition(200, 0);
    buttonPause->setText("Pause");
    buttonPause->setCallbackId(1);
    buttonPause->bindCallback(tgui::Button::LeftMouseClicked);
    buttonPause->setSize(100, 100);

    tgui::Button::Ptr buttonStop(gui);
    buttonStop->load(THEME_CONFIG_FILE);
    buttonStop->setPosition(400, 0);
    buttonStop->setText("Image");
    buttonStop->setCallbackId(3);
    buttonStop->bindCallback(tgui::Button::LeftMouseClicked);
    buttonStop->setSize(100, 100);
}

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

	std::vector<tgui::Button> bva;
	bva[0] = _bpl;
	bva[1] = _bpa;
	bva[2] = _bst;
}
