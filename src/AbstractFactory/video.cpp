#include "video.hpp"
#include <iostream>

#include "buttonsVA.hpp"
#include "formatBig.hpp"
Video::Video(VideoInterfaceFactory* viFact)
{
	ButtonsVA* bva;
	FormatBig* fb;
	_i = viFact->createInterface(bva,fb);
}

void Video::afficher()
{
	std::cout << "Je suis une vidéo" << std::endl;
}