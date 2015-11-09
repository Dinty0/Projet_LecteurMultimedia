#include "Boutons.hpp"
#include "Format.hpp"
#include "Audio.hpp"

Audio::Audio()
{
	Audio::creerMultimedia();
}

void Audio::creerMultimedia()
{
	Audio::creerBoutons();
	Audio::creerFormat();
}

void Audio::creerBoutons()
{
	
}

void Audio::creerFormat()
{
	_format->creerPetitFormat();
}
