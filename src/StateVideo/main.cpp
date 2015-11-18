#include "video.hpp"
#include <iostream>

int main()
{
	Video vid;
	vid.setEtatV(vid.getEtatLectureV());
	vid.setEtatV(vid.getEtatPauseV());
	vid.setEtatV(vid.getEtatArretV());
}