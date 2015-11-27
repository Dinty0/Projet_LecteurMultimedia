#include "audio.hpp"
#include <iostream>

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>
#include <sfeMovie/Movie.hpp>

#define THEME_CONFIG_FILE "src/widgets/Black.conf"

#include "AbstractFactory/buttonsVA.hpp"
#include "AbstractFactory/formatSmall.hpp"

Audio::Audio(AudioInterfaceFactory* aiFact)
{
	ButtonsVA* bva = new ButtonsVA();
	FormatSmall* fs = new FormatSmall();
	_i = aiFact->createInterface(bva,fs);

    EtatArretA ea(this);
    EtatLectureA el(this);
    EtatPauseA ep(this);

    _etatArret = ea;
    _etatLecture = el;
    _etatPause = ep;
    _etatCourant = &(_etatArret);

}

Audio::~Audio(){}

EtatA* Audio::getEtatCourant()
{
    return _etatCourant;
}

EtatLectureA* Audio::getEtatLecture()
{
    return &_etatLecture;
}

EtatPauseA* Audio::getEtatPause()
{
    return &_etatPause; 
}

EtatArretA* Audio::getEtatArret()
{
    return &_etatArret;
}

void Audio::setEtat(EtatA* ea)
{
    _etatCourant = ea;
    _etatCourant->afficherA();
}

void Audio::utiliserBoutonLecture(sf::Sound* sound)
{
    _etatCourant->utiliserBoutonLectureA(sound);
}

void Audio::utiliserBoutonPause(sf::Sound* sound)
{
    _etatCourant->utiliserBoutonPauseA(sound);
}

void Audio::utiliserBoutonStop(sf::Sound* sound)
{
    _etatCourant->utiliserBoutonStopA(sound);
}

void Audio::afficher()
{
	std::cout << "Je suis un audio" << std::endl;
}

void Audio::run()
{
    sf::SoundBuffer buffer;
    sf::Sound sound;

    tgui::Callback callback;
    tgui::Picture::Ptr picture(*(_i.getGui()));
    picture->load("src/fonts/fond-blanc.png");

    _dir.setFilesVector("ressources/Musique");
    _dir.createDirWidget(_i.getGui());


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
                utiliserBoutonLecture(&sound);
            }
          	else if (callback.id == 2)
            {
            	utiliserBoutonPause(&sound);
            }
            else if (callback.id == 3)
            {
            	utiliserBoutonStop(&sound);

            }
            else if(callback.id==5){
                buffer.loadFromFile(_dir.returnPath(_dir.getItemSelected()));
                sound.setBuffer(buffer);
            }
        }
        _i.getFormat()->getWindow()->clear();
        _i.getGui()->draw();
        _i.getFormat()->getWindow()->display();
    }
}
