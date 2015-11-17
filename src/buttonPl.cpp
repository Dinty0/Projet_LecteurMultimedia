#include "buttonPl.hpp"

#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>
#define THEME_CONFIG_FILE "src/widgets/Black.conf"

ButtonPl::ButtonPl()
{
	sf::RenderWindow window(sf::VideoMode(600, 100), "Lecteur multimedia");
    tgui::Gui gui(window);
    tgui::Callback callback;
    

    tgui::Button::Ptr buttonPlay(gui);
    buttonPlay->load(THEME_CONFIG_FILE);
    buttonPlay->setPosition(0, 0);
    buttonPlay->setText("Play");
    buttonPlay->setCallbackId(2);
    buttonPlay->bindCallback(tgui::Button::LeftMouseClicked);
    buttonPlay->setSize(100, 100);
}