#include "audioInterfaceFactory.hpp"

Interface AudioInterfaceFactory::createInterface(ButtonsVA* bva, FormatSmall* fs)
{
/*
	// Création des boutons
	bva->createButtons();

	// Création du format
	fs->createFormat();

*/
	Interface i(bva,fs);
	return i;
}