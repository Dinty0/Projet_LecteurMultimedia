#include "EtatV.hpp"

class EtatArretV : public EtatV
{
	private:
		Video* _video;

	public:
		EtatArretV();
		void utiliserBoutonLectureV();
		void afficherV();
};