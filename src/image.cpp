#include "image.hpp"
#include <iostream>

#include "buttonsI.hpp"
#include "formatBig.hpp"
#define THEME_CONFIG_FILE "src/widgets/Black.conf"

Image::Image()
{
	ButtonsI bi;
	FormatBig fb;
	_i = _iiFact.createInterface(bi,fb);
}

void Image::afficher()
{
	std::cout << "Je suis un image" << std::endl;
}

void Image::run()
{
	sf::RenderWindow window(sf::VideoMode(_i.getFormat().getLongueur(), _i.getFormat().getLargeur()), "Lecteur Image");
	//sf::RenderWindow window(sf::VideoMode(1200, 1080), "Lecteur Image");
    tgui::Gui gui(window);
    tgui::Callback callback;

    
    tgui::Button::Ptr bni = _i.getButtons().getButtonNI();
    tgui::Button::Ptr bpi = _i.getButtons().getButtonPI();
	

	while (window.isOpen())
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
            else if (callback.id == 3)
            {
	        	//quitter (retour au menu ?)
	        	std::cout << "Je veux quitter" << std::endl;
            }
        
    }
    window.clear();
    gui.draw();
    window.display();

    }
}