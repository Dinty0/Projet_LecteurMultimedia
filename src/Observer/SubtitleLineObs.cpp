#include "SubtitleLineObs.hpp"


SubtitleLineObs::SubtitleLineObs(Subject *s, tgui::Gui* gui)
{
	_subject=s;
	_data="";

	tgui::Label::Ptr label(*gui);
	listBox->load(THEME_CONFIG_FILE);
	listBox->setSize(250, 250);
	listBox->setItemHeight(20);
	listBox->setPosition(300, 90);
	_label=label;
	gui->add(_label,"Label");

}

sdt::string SubtitleLineObs::getData(){
	return _data;
}

void SubtitleLineObs::display()
{
	_label->setText(_Data);

}
void SubtitleLineObs::update(std::string d)
{
	_data=d;
	display();
}

