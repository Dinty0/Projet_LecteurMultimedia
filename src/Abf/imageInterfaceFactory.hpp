#include "interfaceFactory.hpp"

class Interface;

class ImageInterfaceFactory : public InterfaceFactory
{
	public:
		Interface createInterface(ButtonsI bi, FormatBig fb);
};