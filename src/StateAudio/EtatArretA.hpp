#include "EtatA.hpp"

class EtatArretA : public EtatA
{
	private:
		Audio* _audio;

	public:
		EtatArretA();
		void utiliserBoutonLectureA();
		void afficherA();
};