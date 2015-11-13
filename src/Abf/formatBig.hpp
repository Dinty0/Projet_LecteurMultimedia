#include "format.hpp"

class FormatBig : public Format
{		
	private:
		int _longueurLecteur;
		int _largeurLecteur;
	public:
		FormatBig();
		Format createFormat();
};
