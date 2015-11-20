#include "imageInterfaceFactory.hpp"

class Image
{
	private:
		Interface _i;
		//...
	public:
		Image(ImageInterfaceFactory* iiFact);
		void afficher();
		void run();

};