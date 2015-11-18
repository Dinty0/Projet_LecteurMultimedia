#include "media.hpp"

#include "audioInterfaceFactory.hpp"


class Audio : public Media
{
	private:
		AudioInterfaceFactory _aiFact;
		Interface _i;
		//...
	public:
		Audio();
		void afficher();

};