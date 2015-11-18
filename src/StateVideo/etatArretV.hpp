#include "etatV.hpp"

class EtatArretV : public EtatV
{
	private:
		Video* _video;

	public:
		EtatArretV();
		EtatArretV(Video* v);
		void utiliserBoutonLectureV();
		void afficherV();
};