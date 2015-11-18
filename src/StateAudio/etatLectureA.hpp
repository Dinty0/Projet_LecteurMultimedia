#include "etatA.hpp"

class EtatLectureA : public EtatA
{
	private:
		Audio* _audio;

	public:
		EtatLectureA();
		EtatLectureA(Audio* a);
		void utiliserBoutonStopA();
		void utiliserBoutonPauseA();
		void afficherA();
};