#include "image.hpp"
#include <iostream>

#include "buttonsI.hpp"
#include "formatBig.hpp"
#define THEME_CONFIG_FILE "src/widgets/Black.conf"

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

    std::cout << bni->getText().getSize() << std::endl;
    tgui::Picture::Ptr picture(*(_i.getGui()));
    picture->load("src/fond-blanc.png");

	while (_i.getFormat()->getWindow()->isOpen())
    {
        sf::Event event;
        while (_i.getFormat()->getWindow()->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                _i.getFormat()->getWindow()->close();
            }
            _i.getGui()->handleEvent(event);
        }

        while (_i.getGui()->pollCallback(callback))
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
        _i.getFormat()->getWindow()->clear();
        _i.getGui()->draw();
        _i.getFormat()->getWindow()->display();
    }
}