#include "buttonSt.hpp"

#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>

#define THEME_CONFIG_FILE "src/widgets/Black.conf"

ButtonSt::ButtonSt()
{	
	sf::RenderWindow window(sf::VideoMode(600, 100), "Lecteur multimedia");
    tgui::Gui gui(window);
    tgui::Callback callback;

    tgui::Button::Ptr buttonStop(gui);
    buttonStop->load(THEME_CONFIG_FILE);
    buttonStop->setPosition(400, 0);
    buttonStop->setText("Image");
    buttonStop->setCallbackId(3);
    buttonStop->bindCallback(tgui::Button::LeftMouseClicked);
    buttonStop->setSize(100, 100);
}