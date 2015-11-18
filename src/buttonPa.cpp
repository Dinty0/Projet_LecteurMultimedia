#include "buttonPa.hpp"

#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>
#define THEME_CONFIG_FILE "src/widgets/Black.conf"


ButtonPa::ButtonPa()
{

	sf::RenderWindow window(sf::VideoMode(600, 100), "Lecteur multimedia");
    tgui::Gui gui(window);
    tgui::Callback callback;
    
	tgui::Button::Ptr buttonPause(gui);
    buttonPause->load(THEME_CONFIG_FILE);
    buttonPause->setPosition(200, 0);
    buttonPause->setText("Pause");
    buttonPause->setCallbackId(1);
    buttonPause->bindCallback(tgui::Button::LeftMouseClicked);
    buttonPause->setSize(100, 100);
}