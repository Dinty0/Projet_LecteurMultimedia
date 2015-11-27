#include <iostream>
#include <sfeMovie/Movie.hpp>
#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>
#include <boost/thread/thread.hpp>
#include "video.hpp"

#include "AbstractFactory/buttonsVA.hpp"
#include "AbstractFactory/formatBig.hpp"

#define THEME_CONFIG_FILE "src/widgets/Black.conf"

#include "StateVideo/etatV.hpp"
#include "StateVideo/etatArretV.hpp"
#include "StateVideo/etatLectureV.hpp"
#include "StateVideo/etatPauseV.hpp"
#include "Observer/SubtitleSubject.hpp"
#include "Observer/SubtitleLineObs.hpp"

Video::Video(VideoInterfaceFactory* viFact)
{
	ButtonsVA* bva = new ButtonsVA();
	FormatBig* fb = new FormatBig();
	_i = viFact->createInterface(bva,fb);

    EtatArretV ea(this);
    EtatLectureV el(this);
    EtatPauseV ep(this);

    _etatArret = ea;
    _etatLecture = el;
    _etatPause = ep;
    _etatCourant = &(_etatArret);

}

Video::~Video(){}

void Video::afficher()
{
	std::cout << "Je suis une vidéo" << std::endl;
}

EtatV* Video::getEtatCourant()
{
    return _etatCourant;
}

EtatLectureV* Video::getEtatLecture()
{
    return &_etatLecture;
}

EtatPauseV* Video::getEtatPause()
{
    return &_etatPause; 
}

EtatArretV* Video::getEtatArret()
{
    return &_etatArret;
}

void Video::setEtat(EtatV* ev)
{
    _etatCourant = ev;
    _etatCourant->afficherV();
}

void Video::utiliserBoutonLecture(sfe::Movie* movie)
{
    _etatCourant->utiliserBoutonLectureV(movie);
}

void Video::utiliserBoutonPause(sfe::Movie* movie)
{
    _etatCourant->utiliserBoutonPauseV(movie);
}

void Video::utiliserBoutonStop(sfe::Movie* movie)
{
    _etatCourant->utiliserBoutonStopV(movie);
}


void Video::run()
{
	sfe::Movie movie;
    tgui::Callback callback;
    bool subtitle=false;

    SubtitleSubject suj(&movie);
    SubtitleLineObs obs(&suj, _i.getGui());
    suj.addObs(&obs);

    _dir.setFilesVector("ressources/Video");
    _dir.createDirWidget(_i.getGui());

    tgui::Button::Ptr buttonST(*(_i.getGui()));
    buttonST->load(THEME_CONFIG_FILE);
    buttonST->setPosition(880, 740);
    buttonST->setText("CC");
    buttonST->setCallbackId(4);
    buttonST->bindCallback(tgui::Button::LeftMouseClicked);
    buttonST->setSize(60, 60);

    _i.getGui()->get("buttonPlay")->setPosition(0,770);
    _i.getGui()->get("buttonPause")->setPosition(60,770);
    _i.getGui()->get("buttonStop")->setPosition(120,770);



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
                if(subtitle)
                {
                    
                    std::string path = "ressources/SousTitres/"+_dir.getItem(_dir.getItemSelected()).substr(0, _dir.getItem(_dir.getItemSelected()).size()-3)+"txt";

                    utiliserBoutonLecture(&movie);
                    //boost::thread* lecture = new boost::thread(boost::bind(&Video::utiliserBoutonLecture, this, &movie));
                    boost::thread* subt = new boost::thread(boost::bind(&SubtitleSubject::setData, &suj, path));
                    if (!(_i.getFormat()->getWindow()->isOpen()))
                    {
                        subt->interrupt();
                    }

                }
                else
                {
                    utiliserBoutonLecture(&movie);
                }
                _i.getGui()->draw();
            }
          	else if (callback.id == 2)
            {
                utiliserBoutonPause(&movie);
            }
            else if (callback.id == 3)
            {
                utiliserBoutonStop(&movie);
            }
            else if (callback.id == 4)
            {
                if (subtitle)
                {
                    subtitle=false;
                }
                else
                {
                    subtitle=true;
                }

            }
            else if(callback.id==5)
            {
                movie.openFromFile(_dir.returnPath(_dir.getItemSelected()));
                _dir.hide();
                movie.resizeToFrame(0, 0, _i.getFormat()->getWindow()->getSize().x, _i.getFormat()->getWindow()->getSize().y);
            }

        }
        _i.getFormat()->getWindow()->clear();
        _i.getGui()->draw();
        _i.getFormat()->getWindow()->draw(movie);
        _i.getFormat()->getWindow()->display();
    }
}


