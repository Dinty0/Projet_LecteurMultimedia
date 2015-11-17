#include "buttonPa.hpp"

#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>

ButtonPa::ButtonPa()
{
	tgui::Gui gui(window);
    tgui::Callback callback;
    
	tgui::Button::Ptr buttonPause(gui);
    buttonVideo->load(THEME_CONFIG_FILE);
    buttonVideo->setPosition(200, 0);
    buttonVideo->setText("Pause");
    buttonVideo->setCallbackId(1);
    buttonVideo->bindCallback(tgui::Button::LeftMouseClicked);
    buttonVideo->setSize(100, 100);
}