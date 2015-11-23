#include "audioInterfaceFactory.hpp"
#include "../Dir/Dir.hpp"


class Audio
{
	private:
		Interface _i;
		Dir _dir;
		//...
	public:
		Audio(AudioInterfaceFactory* aiFact);
		void afficher();
		void run();

};