#include <iostream>

#ifndef ETATV_H
#define ETATV_H

class Video;

class EtatV
{
	public:
		void utiliserBoutonStopV();
		void utiliserBoutonPauseV();
		void utiliserBoutonLectureV();
		virtual void afficherV()=0;
};

#endif