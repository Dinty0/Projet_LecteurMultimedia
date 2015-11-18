#include "etatV.hpp"
#include "etatArretV.hpp"
#include "etatLectureV.hpp"
#include "etatPauseV.hpp"

#ifndef VIDEO_H
#define VIDEO_H

class Video
{
	private:
		//...
		EtatV* _etatCourant;
		EtatArretV _etatArret;
		EtatLectureV _etatLecture;
		EtatPauseV _etatPause;
	public:
		Video();
		EtatV* getEtatCourantV();
		EtatLectureV* getEtatLectureV();
		EtatPauseV* getEtatPauseV();
		EtatArretV* getEtatArretV();
		void setEtatV(EtatV* ea);

};

#endif