#include "audio.hpp"
#include <iostream>

int main()
{
	Audio aud;
	aud.setEtatA(aud.getEtatLectureA());
	aud.setEtatA(aud.getEtatPauseA());
	aud.setEtatA(aud.getEtatArretA());
}