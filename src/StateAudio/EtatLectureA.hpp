#include "EtatA.hpp"

class EtatLectureA : public EtatA
{
	private:
		Audio* _audio;

	public:
		EtatLectureA();
		void utiliserBoutonStopA();
		void utiliserBoutonPauseA();
		void afficherA();
};