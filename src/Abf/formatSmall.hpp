#include "format.hpp"

class FormatSmall : public Format
{
	private:
		int _longueurLecteur;
		int _largeurLecteur;
	public:
		FormatSmall();
		Format createFormat();
};