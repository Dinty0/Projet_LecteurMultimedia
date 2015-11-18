#include "media.hpp"

#include "videoInterfaceFactory.hpp"
#include "interface.hpp"

class Video : public Media
{
	private:
		Interface _i;
		//...
	public:
		Video();
		Video(VideoInterfaceFactory* viFact);
		void afficher();

};