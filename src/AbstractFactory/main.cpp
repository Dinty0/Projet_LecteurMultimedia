#include <SFML/Graphics.hpp>
#include <TGUI/TGUI.hpp>
#include <sfeMovie/Movie.hpp>
#define THEME_CONFIG_FILE "src/widgets/Black.conf"

#include "video.hpp"
#include "audio.hpp"
#include "image.hpp"

int main()
{    
    sf::RenderWindow window(sf::VideoMode(600, 100), "Lecteur multimedia");
    tgui::Gui gui(window);
    tgui::Callback callback;

    if (gui.setGlobalFont("src/fonts/DejaVuSans.ttf") == false)
        return 1;

    tgui::Picture::Ptr picture(gui);
    picture->load("src/fond-blanc.png");

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
                Video vid;
                vid.afficher();
            }
          else if (callback.id == 2)
            {
                sfe::Movie movie;
                gui.removeAllWidgets();
                window.create(sf::VideoMode(800, 600), "Lecteur Video");
                movie.openFromFile("src/drop.avi");
                movie.play();

            }
            else if (callback.id == 3)
            {
                Image img;
                img.afficher();
                img.run();
            }
        
    }
    window.clear();
    gui.draw();
    window.display();

    }
    return 0;
}