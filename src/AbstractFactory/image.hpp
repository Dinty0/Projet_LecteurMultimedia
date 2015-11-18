#include "media.hpp"

#include "imageInterfaceFactory.hpp"

class Image : public Media
{
	private:
		Interface _i;
		//...
	public:
		Image(ImageInterfaceFactory* iiFact);
		void afficher();
		void run();

};