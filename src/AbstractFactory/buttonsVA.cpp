#include "buttonsVA.hpp"

#define THEME_CONFIG_FILE "src/widgets/Black.conf"

ButtonsVA::ButtonsVA()
{
    _bpl = 0;
    _bpa = 0;
    _bst = 0;
}

ButtonsVA::ButtonsVA(tgui::Button::Ptr bpl, tgui::Button::Ptr bpa, tgui::Button::Ptr bst)
{
	_bpl = bpl;
	_bpa = bpa;
	_bst = bst;
}

tgui::Button::Ptr ButtonsVA::getButtonPl() { return _bpl; }
tgui::Button::Ptr ButtonsVA::getButtonPa() { return _bpa; }
tgui::Button::Ptr ButtonsVA::getButtonSt() { return _bst; }

void ButtonsVA::createButtons() 
{
    tgui::Button::Ptr buttonPlay;
    buttonPlay->load(THEME_CONFIG_FILE);
    buttonPlay->setPosition(0, 0);
    buttonPlay->setText("Play");
    buttonPlay->setCallbackId(1);
    buttonPlay->bindCallback(tgui::Button::LeftMouseClicked);
    buttonPlay->setSize(100, 100);
    _bpl = buttonPlay;
    
    tgui::Button::Ptr buttonPause;
    buttonPause->load(THEME_CONFIG_FILE);
    buttonPause->setPosition(200, 0);
    buttonPause->setText("Pause");
    buttonPause->setCallbackId(2);
    buttonPause->bindCallback(tgui::Button::LeftMouseClicked);
    buttonPause->setSize(100, 100);
    _bpa = buttonPause;

    tgui::Button::Ptr buttonStop;
    buttonStop->load(THEME_CONFIG_FILE);
    buttonStop->setPosition(400, 0);
    buttonStop->setText("Image");
    buttonStop->setCallbackId(3);
    buttonStop->bindCallback(tgui::Button::LeftMouseClicked);
    buttonStop->setSize(100, 100);
    _bst = buttonStop;
}
