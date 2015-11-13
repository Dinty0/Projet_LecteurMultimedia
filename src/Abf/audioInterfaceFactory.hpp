#include "interfaceFactory.hpp"

class Interface;

class AudioInterfaceFactory : public InterfaceFactory
{
	public:
		Interface createInterface(ButtonsVA bva, FormatSmall fs);
};