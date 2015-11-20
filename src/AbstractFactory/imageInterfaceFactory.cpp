#include "imageInterfaceFactory.hpp"


Interface ImageInterfaceFactory::createInterface(Buttons* b, Format* f)
{

	// Création du format
	f->createFormat();

	// Création des boutons
	tgui::Gui* gui = new tgui::Gui(*(f->getWindow()));
	gui->setGlobalFont("src/fonts/DejaVuSans.ttf");

    tgui::Callback callback;

	gui = b->createButtons(gui);

	tgui::Picture::Ptr picture(*(gui));
    picture->load("src/fond-blanc.png");

	while (f->getWindow()->isOpen())
    {
        sf::Event event;
        while (f->getWindow()->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                f->getWindow()->close();
            }
            gui->handleEvent(event);
        }

        while (gui->pollCallback(callback))
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
        f->getWindow()->clear();
        gui->draw();
        f->getWindow()->display();
    }

	Interface i(b,f,gui);
	return i;
}