#include "etatV.hpp"

class EtatPauseV : public EtatV
{
	private:
		Video* _video;

	public:
		EtatPauseV();
		EtatPauseV(Video* v);
		void utiliserBoutonStopV();
		void utiliserBoutonLectureV();
		void afficherV();
};