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
    _chrono="00:00:00";

}

void Image::ChronoAddOne()
{
    if(_chrono.substr(6,2).compare("59"))
    {
        _chrono.substr(6,2)="00";
        if(_chrono.substr(3,2).compare("59"))
        {
            _chrono.substr(3,2)="00";
            _chrono.substr(0,2) = std::to_string(1+std::stoi(_chrono.substr(0,2)));
        }
        else
        {
            _chrono.substr(3,2) = std::to_string(1+std::stoi(_chrono.substr(3,2)));
        }

    }
    else
    {
        _chrono.substr(6,2) = std::to_string(1+std::stoi(_chrono.substr(6,2)));

    }
}

void Image::afficher()
{
	std::cout << "Je suis un image" << std::endl;
}

void Image::run()
{
    tgui::Callback callback;

    tgui::Picture::Ptr picture(*(_i.getGui()));
    picture->load("src/fond-blanc.png");
    _dir.setFilesVector("ressources/Image");
    _dir.createDirWidget(_i.getGui());

	while (_i.getFormat()->getWindow()->isOpen())
    {
        ChronoAddOne();
        std::cout<<_chrono.substr(6,2).compare("00")<<std::endl;
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
            if (callback.id == 0)
            {            
                //précédent
               if(_dir.getItemSelected()==0)
                {
                    picture->load(_dir.returnPath(_dir.getFilesVector().size()-1));
                }
                else
                {
                    picture->load(_dir.returnPath(_dir.getItemSelected()-1));
                }
            }
          	else if (callback.id == 1)
            {
                // suivant
                if(_dir.getItemSelected()>_dir.getFilesVector().size()-1)
                {
                    picture->load(_dir.returnPath(0));
                }
                else
                {
                    picture->load(_dir.returnPath(_dir.getItemSelected()+1));
                }
            }
            else if(callback.id == 2)
            {   
                picture->load(_dir.returnPath(_dir.getItemSelected()));
            }
        }
        _i.getFormat()->getWindow()->clear();
        _i.getGui()->draw();
        _i.getFormat()->getWindow()->display();
    }
}