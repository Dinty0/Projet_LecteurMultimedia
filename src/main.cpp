#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>
#include <sfeMovie/Movie.hpp>
#include "dirent.h"
#include <SFML/Audio.hpp>
#define THEME_CONFIG_FILE "src/widgets/Black.conf"

#include "video.hpp"
#include "audio.hpp"
#include "image.hpp"

#include <X11/Xlib.h>

int main()
{    
    XInitThreads();
    sf::RenderWindow window(sf::VideoMode(600, 100), "Lecteur multimedia");
    tgui::Gui gui(window);
    tgui::Callback callback;
    sfe::Movie movie;

	window.setVerticalSyncEnabled(true);     
	
    if (gui.setGlobalFont("src/fonts/DejaVuSans.ttf") == false)
        return 1;
   
    tgui::Picture::Ptr picture(gui);
    picture->load("src/fonts/fond-blanc.png");
    
    tgui::Button::Ptr buttonVideo(gui);
    buttonVideo->load(THEME_CONFIG_FILE);
    buttonVideo->setPosition(0, 0);
    buttonVideo->setText("Video");
    buttonVideo->setCallbackId(1);
    buttonVideo->bindCallback(tgui::Button::LeftMouseClicked);
    buttonVideo->setSize(100, 100);

    tgui::Button::Ptr buttonMusic(gui);
    buttonMusic->load(THEME_CONFIG_FILE);
    buttonMusic->setPosition(200, 0);
    buttonMusic->setText("Musique");
    buttonMusic->setCallbackId(2);
    buttonMusic->bindCallback(tgui::Button::LeftMouseClicked);
    buttonMusic->setSize(100, 100);

    tgui::Button::Ptr buttonImg(gui);
    buttonImg->load(THEME_CONFIG_FILE);
    buttonImg->setPosition(400, 0);
    buttonImg->setText("Image");
    buttonImg->setCallbackId(3);
    buttonImg->bindCallback(tgui::Button::LeftMouseClicked);
    buttonImg->setSize(100, 100);
 
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
                VideoInterfaceFactory* viFact = new VideoInterfaceFactory();
                Video vid(viFact);
                vid.run();
            }
            else if (callback.id == 2)
            {
                
                AudioInterfaceFactory* aiFact = new AudioInterfaceFactory();
                Audio aud(aiFact);
                aud.run();
            }
            else if (callback.id == 3)
            {

                ImageInterfaceFactory* iiFact = new ImageInterfaceFactory();
                Image img(iiFact);
                img.run();
			}
        } 
        window.clear();
        window.draw(movie);

        gui.draw();
        window.display();
    }
    return 0;
    
}
