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
tgui::Button::Ptr ButtonsVA::getButtonNI() {}
tgui::Button::Ptr ButtonsVA::getButtonPI() {}

void ButtonsVA::createButtons(tgui::Gui* gui) 
{
    tgui::Button::Ptr buttonPlay(*gui);
    buttonPlay->load(THEME_CONFIG_FILE);
    buttonPlay->setPosition(0, 570);
    buttonPlay->setText("Play");
    buttonPlay->setCallbackId(1);
    buttonPlay->bindCallback(tgui::Button::LeftMouseClicked);
    buttonPlay->setSize(30, 30);
    _bpl = buttonPlay;
    gui->add(buttonPlay,"buttonPlay");
    

    tgui::Button::Ptr buttonPause(*gui);
    buttonPause->load(THEME_CONFIG_FILE);
    buttonPause->setPosition(60, 570);
    buttonPause->setText("Pause");
    buttonPause->setCallbackId(2);
    buttonPause->bindCallback(tgui::Button::LeftMouseClicked);
    buttonPause->setSize(30, 30);
    _bpa = buttonPause;
    gui->add(buttonPause,"buttonPause");

    tgui::Button::Ptr buttonStop(*gui);
    buttonStop->load(THEME_CONFIG_FILE);
    buttonStop->setPosition(120, 570);
    buttonStop->setText("Stop");
    buttonStop->setCallbackId(3);
    buttonStop->bindCallback(tgui::Button::LeftMouseClicked);
    buttonStop->setSize(30, 30);
    _bst = buttonStop;
    gui->add(buttonStop,"buttonStop");
}
