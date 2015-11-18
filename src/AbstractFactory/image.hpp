#include "media.hpp"

#include "imageInterfaceFactory.hpp"

class Image : public Media
{
	private:
		ImageInterfaceFactory _iiFact;
		Interface _i;
		//...
	public:
		Image();
		void afficher();
		void run();

};