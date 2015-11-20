#include "audioInterfaceFactory.hpp"

class Audio
{
	private:
		Interface _i;
		//...
	public:
		Audio(AudioInterfaceFactory* aiFact);
		void afficher();
		void run();

};