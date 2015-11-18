#include "media.hpp"

#include "videoInterfaceFactory.hpp"
#include "interface.hpp"

class Video : public Media
{
	private:
		VideoInterfaceFactory _viFact;
		Interface _i;
		//...
	public:
		Video();
		void afficher();

};