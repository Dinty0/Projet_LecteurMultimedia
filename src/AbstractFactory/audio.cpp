#include "audio.hpp"
#include <iostream>

#include "buttonsVA.hpp"
#include "formatSmall.hpp"

Audio::Audio(AudioInterfaceFactory* aiFact)
{
	ButtonsVA* bva;
	FormatSmall* fs;
	_i = aiFact->createInterface(bva,fs);
}

void Audio::afficher()
{
	std::cout << "Je suis un audio" << std::endl;
}