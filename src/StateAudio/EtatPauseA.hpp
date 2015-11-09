#include "EtatA.hpp"

class EtatPauseA : public EtatA
{
	private:
		Audio* _audio;

	public:
		EtatPauseA();
		void utiliserBoutonStopA();
		void utiliserBoutonLectureA();
		void afficherA();
};