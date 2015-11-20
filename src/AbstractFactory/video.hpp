#include "videoInterfaceFactory.hpp"
#include "interface.hpp"

class Video
{
	private:
		Interface _i;
		//...
	public:
		Video();
		Video(VideoInterfaceFactory* viFact);
		void afficher();
		void run();

};