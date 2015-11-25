#include "SubtitleLineObs.hpp"
#define THEME_CONFIG_FILE "src/widgets/Black.conf"



SubtitleLineObs::SubtitleLineObs(Subject* s, tgui::Gui* gui)
{
	_subject=s;
	_data="";

	tgui::Label::Ptr label(*gui);
	label->load(THEME_CONFIG_FILE);
	label->setSize(250, 250);
	label->setPosition(150, 770);
	label->setCallbackId(6);
	_label=label;
	gui->add(_label,"Label");

}

std::string SubtitleLineObs::getData(){
	return _data;
}

void SubtitleLineObs::display()
{	std::cout<<_data<<std::endl;
	_label->setText(_data);

}
void SubtitleLineObs::update(std::string d)
{
	_data=d;
	display();
}

