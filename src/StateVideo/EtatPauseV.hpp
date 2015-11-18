#include "EtatV.hpp"

class EtatPauseV : public EtatV
{
	private:
		Video* _video;

	public:
		EtatPauseV();
		void utiliserBoutonStopV();
		void utiliserBoutonLectureV();
		void afficherV();
};