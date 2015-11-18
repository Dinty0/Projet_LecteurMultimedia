#include "media.hpp"

#include "audioInterfaceFactory.hpp"


class Audio : public Media
{
	private:
		Interface _i;
		//...
	public:

		Audio(AudioInterfaceFactory* aiFact);
		void afficher();

};