#include "AbstractFactory/imageInterfaceFactory.hpp"
#include "Dir/Dir.hpp"

class Image
{
	private:
		Interface _i;
		Dir _dir;
		//...
	public:
		Image(ImageInterfaceFactory* iiFact);
		void afficher();
		void run();

};