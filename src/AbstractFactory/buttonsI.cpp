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


void ButtonsI::createButtons(tgui::Gui* gui) 
{
    tgui::Button::Ptr buttonPI(*gui);
    buttonPI->load(THEME_CONFIG_FILE);
    buttonPI->setPosition(0, 700);
    buttonPI->setText("Image precedente");
    buttonPI->setCallbackId(0);
    buttonPI->bindCallback(tgui::Button::LeftMouseClicked);
    buttonPI->setSize(100, 100);
    _bpi = buttonPI;
    gui->add(buttonPI,"buttonPI");

    
    tgui::Button::Ptr buttonNI(*gui);
    buttonNI->load(THEME_CONFIG_FILE);
    buttonNI->setPosition(800, 700);
    buttonNI->setText("Image suivante");
    buttonNI->setCallbackId(1);
    buttonNI->bindCallback(tgui::Button::LeftMouseClicked);
    buttonNI->setSize(100, 100);
    _bni = buttonNI;
    gui->add(buttonNI,"buttonNI");
}