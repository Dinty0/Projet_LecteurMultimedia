#include "audio.hpp"
#include <iostream>

int main()
{
	std::cout << "1" << std::endl;
	Audio aud;
	std::cout << "2" << std::endl;
	aud.setEtatA(&(aud.getEtatLectureA()));
	std::cout << "3" << std::endl;
	aud.setEtatA(&(aud.getEtatPauseA()));
	std::cout << "4" << std::endl;
	aud.setEtatA(&(aud.getEtatArretA()));
	std::cout << "5" << std::endl;
}