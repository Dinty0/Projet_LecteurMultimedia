#include "image.hpp"
#include <iostream>

#include "buttonsI.hpp"
#include "formatBig.hpp"
#define THEME_CONFIG_FILE "widgets/Black.conf"

Image::Image(ImageInterfaceFactory* iiFact)
{
    FormatBig* fb = new FormatBig();
	ButtonsI* bi = new ButtonsI();
	_i = iiFact->createInterface(bi,fb);
}

void Image::afficher()
{
	std::cout << "Je suis un image" << std::endl;
}

void Image::run()
{

    tgui::Callback callback;

    tgui::Button::Ptr bni = _i.getButtons()->getButtonNI();
    tgui::Button::Ptr bpi = _i.getButtons()->getButtonPI();
    

	while (_i.getWindow().isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
            gui.handleEvent(event);
        }

        while (gui.pollCallback(callback))
        {
            if (callback.id == 1)
            {            
                //changer image precedente
                std::cout << "Je veux aller a l'image précédente" << std::endl;
            }
          	else if (callback.id == 2)
            {
                //changer image suivante
            	std::cout << "Je veux aller a l'image suivante" << std::endl;
            }
        }
    }
    window.clear();
    gui.draw();
    window.display();

    }
}