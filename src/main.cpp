#include "video.hpp"
#include "audio.hpp"
#include <iostream>

int main()
{
	Video vid;
	vid.utiliserBoutonLecture();
	vid.utiliserBoutonLecture();
	vid.utiliserBoutonPause();
	vid.utiliserBoutonPause();
	vid.utiliserBoutonLecture();
	vid.utiliserBoutonStop();
	vid.utiliserBoutonPause();
	vid.utiliserBoutonLecture();
	vid.utiliserBoutonPause();
	vid.utiliserBoutonStop();

	Audio aud;
	aud.utiliserBoutonLecture();
	aud.utiliserBoutonLecture();
	aud.utiliserBoutonPause();
	aud.utiliserBoutonPause();
	aud.utiliserBoutonLecture();
	aud.utiliserBoutonStop();
	aud.utiliserBoutonPause();
	aud.utiliserBoutonLecture();
	aud.utiliserBoutonPause();
	aud.utiliserBoutonStop();



}
