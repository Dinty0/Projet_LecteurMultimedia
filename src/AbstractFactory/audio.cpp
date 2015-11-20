#include "audio.hpp"
#include <iostream>

#include <SFML/Audio.hpp>

#define THEME_CONFIG_FILE "src/widgets/Black.conf"

#include "buttonsVA.hpp"
#include "formatSmall.hpp"

Audio::Audio(AudioInterfaceFactory* aiFact)
{
	ButtonsVA* bva = new ButtonsVA();
	FormatSmall* fs = new FormatSmall();
	_i = aiFact->createInterface(bva,fs);
}

void Audio::afficher()
{
	std::cout << "Je suis un audio" << std::endl;
}

void Audio::run()
{

    sf::SoundBuffer buffer;
    if (!buffer.loadFromFile("319.wav"))
        std::cout << "fichier raté" << std::endl;

    sf::Sound sound;
    sound.setBuffer(buffer);
    sound.play();

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
                std::cout << "play" << std::endl;
                sound.play();
            }
          	else if (callback.id == 2)
            {
            	std::cout << "pause" << std::endl;
            }
            else if (callback.id == 3)
            {
            	std::cout << "stop" << std::endl;
            }
        }
        _i.getFormat()->getWindow()->clear();
        _i.getGui()->draw();
        _i.getFormat()->getWindow()->display();
    }


}