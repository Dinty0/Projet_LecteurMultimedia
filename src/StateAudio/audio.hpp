
#include "etatA.hpp"
#include "etatArretA.hpp"
#include "etatLectureA.hpp"
#include "etatPauseA.hpp"

class Audio
{
	private:
		//...
		EtatA* _etatCourant;
		EtatArretA* _etatArret;
		EtatLectureA* _etatLecture;
		EtatPauseA* _etatPause;
	public:
		Audio();
		EtatA* getEtatCourantA();
		EtatLectureA* getEtatLectureA();
		EtatPauseA* getEtatPauseA();
		EtatArretA* getEtatArretA();
		void setEtatA(EtatA* ea);

};