#include "etatA.hpp"

class EtatArretA : public EtatA
{
	private:
		Audio* _audio;

	public:
		EtatArretA();
		EtatArretA(Audio* a);
		void utiliserBoutonLectureA();
		void afficherA();
};