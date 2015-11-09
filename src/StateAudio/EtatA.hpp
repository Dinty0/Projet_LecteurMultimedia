#include <iostream>

class Audio;

class EtatA
{
	public:
		EtatA();
		void utiliserBoutonStopA();
		void utiliserBoutonPauseA();
		void utiliserBoutonLectureA();
		virtual void afficherA()=0;
};