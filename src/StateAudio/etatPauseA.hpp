#include "etatA.hpp"

class EtatPauseA : public EtatA
{
	private:
		Audio* _audio;

	public:
		EtatPauseA();
		EtatPauseA(Audio* a);
		void utiliserBoutonStopA();
		void utiliserBoutonLectureA();
		void afficherA();
};