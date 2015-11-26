#include "SubtitleLineObs.hpp"
#define THEME_CONFIG_FILE "src/widgets/Black.conf"



SubtitleLineObs::SubtitleLineObs(Subject* s, tgui::Gui* gui)
{
	_subject=s;
	_data="";

	tgui::Label::Ptr label(*gui);
	label->load(THEME_CONFIG_FILE);
	label->setSize(500, 250);
	label->setPosition(250, 770);
	label->setCallbackId(6);
	_label=label;
	gui->add(_label,"Label");

}

std::string SubtitleLineObs::getData(){
	return _data;
}

void SubtitleLineObs::display()
{	
	_label->setText(_data);

}
void SubtitleLineObs::update(std::string d)
{
	_data=d;
	display();
}

