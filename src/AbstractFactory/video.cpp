#include "video.hpp"
#include <iostream>
#include <sfeMovie/Movie.hpp>
#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>
#include "buttonsVA.hpp"
#include "formatBig.hpp"

Video::Video(VideoInterfaceFactory* viFact)
{
	ButtonsVA* bva = new ButtonsVA();
	FormatBig* fb = new FormatBig();
	_i = viFact->createInterface(bva,fb);
}

void Video::afficher()
{
	std::cout << "Je suis une vidéo" << std::endl;
}

void Video::run()
{
	sfe::Movie movie;
	movie.openFromFile("ressources/Video/elephants-dream.webm");
    movie.play();

    _i.getGui()->get("buttonPlay")->setPosition(0,770);
    _i.getGui()->get("buttonPause")->setPosition(60,770);
    _i.getGui()->get("buttonStop")->setPosition(120,770);

	tgui::Callback callback;

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
               _i.getFormat()->getWindow()->create(sf::VideoMode(1000,1000), "Vidéo");
				movie.play();
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