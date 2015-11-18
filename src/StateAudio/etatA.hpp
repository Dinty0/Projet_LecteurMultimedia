#include <iostream>

#ifndef ETATA_H
#define ETATA_H

class Audio;

class EtatA
{
	public:
		void utiliserBoutonStopA();
		void utiliserBoutonPauseA();
		void utiliserBoutonLectureA();
		virtual void afficherA()=0;
};

#endif