#include "buttonsI.hpp"

#define THEME_CONFIG_FILE "src/widgets/Black.conf"

ButtonsI::ButtonsI()
{
	_bni = 0;
	_bpi = 0;
}

ButtonsI::ButtonsI(tgui::Button::Ptr bni, tgui::Button::Ptr bpi)
{
	_bni = bni;
	_bpi = bpi;
}

tgui::Button::Ptr ButtonsI::getButtonNI() { return _bni; }
tgui::Button::Ptr ButtonsI::getButtonPI() { return _bpi; }
tgui::Button::Ptr ButtonsI::getButtonPl() {}
tgui::Button::Ptr ButtonsI::getButtonPa() {}
tgui::Button::Ptr ButtonsI::getButtonSt() {}


void ButtonsI::createButtons() 
{
    tgui::Button::Ptr buttonNI;
    buttonNI->load(THEME_CONFIG_FILE);
    buttonNI->setPosition(0, 0);
    buttonNI->setText("Play");
    buttonNI->setCallbackId(1);
    buttonNI->bindCallback(tgui::Button::LeftMouseClicked);
    buttonNI->setSize(100, 100);
    _bni = buttonNI;
    

    tgui::Button::Ptr buttonPI;
    buttonPI->load(THEME_CONFIG_FILE);
    buttonPI->setPosition(200, 0);
    buttonPI->setText("Pause");
    buttonPI->setCallbackId(2);
    buttonPI->bindCallback(tgui::Button::LeftMouseClicked);
    buttonPI->setSize(100, 100);
    _bpi = buttonPI;
}