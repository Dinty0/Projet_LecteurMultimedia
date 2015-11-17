#include "buttonSt.hpp"

#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>

ButtonSt::ButtonSt()
{
    tgui::Button::Ptr buttonStop(gui);
    buttonImg->load(THEME_CONFIG_FILE);
    buttonImg->setPosition(400, 0);
    buttonImg->setText("Image");
    buttonImg->setCallbackId(3);
    buttonImg->bindCallback(tgui::Button::LeftMouseClicked);
    buttonImg->setSize(100, 100);
}