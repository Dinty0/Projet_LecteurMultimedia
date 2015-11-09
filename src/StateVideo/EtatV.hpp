#include <iostream>

class Video;

class EtatV
{
	public:
		EtatV();
		void utiliserBoutonStopV();
		void utiliserBoutonPauseV();
		void utiliserBoutonLectureV();
		virtual void afficherV()=0;
};