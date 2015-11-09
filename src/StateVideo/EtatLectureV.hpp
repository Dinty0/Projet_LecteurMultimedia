#include "EtatV.hpp"

class EtatLectureV : public EtatV
{
	private:
		Video* _video;

	public:
		EtatLectureV();
		void utiliserBoutonStopV();
		void utiliserBoutonPauseV();
		void afficherV();
};