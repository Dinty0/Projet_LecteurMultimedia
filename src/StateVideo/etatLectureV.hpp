#include "etatV.hpp"

class EtatLectureV : public EtatV
{
	private:
		Video* _video;

	public:
		EtatLectureV();
		EtatLectureV(Video* v);
		void utiliserBoutonStopV();
		void utiliserBoutonPauseV();
		void afficherV();
};