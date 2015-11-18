#include "video.hpp"
#include <iostream>

#include "buttonsVA.hpp"
#include "formatBig.hpp"
Video::Video()
{
	ButtonsVA* bva;
	FormatBig* fb;
	std::cout << "vifact->Interface" << std::endl;
	VideoInterfaceFactory fact();
	_viFact = &(fact);
	_i = _viFact->createInterface(bva,fb);
}

void Video::afficher()
{
	std::cout << "Je suis une vidéo" << std::endl;
}