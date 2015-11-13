#include "interfaceFactory.hpp"

class Interface;

class VideoInterfaceFactory : public InterfaceFactory
{
	public:
		Interface createInterface(ButtonsVA bva, FormatBig fb);
};