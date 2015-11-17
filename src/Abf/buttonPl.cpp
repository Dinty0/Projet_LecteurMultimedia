#include "buttonPl.hpp"

#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>

ButtonPl::ButtonPl()
{
    tgui::Button::Ptr buttonPlay(gui);
    buttonVideo->load(THEME_CONFIG_FILE);
    buttonVideo->setPosition(0, 0);
    buttonVideo->setText("Play");
    buttonVideo->setCallbackId(2);
    buttonVideo->bindCallback(tgui::Button::LeftMouseClicked);
    buttonVideo->setSize(100, 100);
}