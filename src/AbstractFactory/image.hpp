#include "imageInterfaceFactory.hpp"
#include "../Dir/Dir.hpp"

class Image
{
	private:
		Interface _i;
		Dir _dir;
		std::string _chrono;
		//...
	public:
		Image(ImageInterfaceFactory* iiFact);
		void afficher();
		void ChronoAddOne();
		void run();

};