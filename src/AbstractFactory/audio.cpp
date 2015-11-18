#include "audio.hpp"
#include <iostream>

#include "buttonsVA.hpp"
#include "formatSmall.hpp"

Audio::Audio()
{
	ButtonsVA* bva;
	FormatSmall* fs;
	_i = _aiFact.createInterface(bva,fs);
}

void Audio::afficher()
{
	std::cout << "Je suis un audio" << std::endl;
}