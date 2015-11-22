#include "SubtitleLineObs.hpp"


SubtitleLineObs::SubtitleLineObs(Subject *s)
{
	_subject=s;
	_data="";
}

sdt::string SubtitleLineObs::getData(){
	return _data;
}

void SubtitleLineObs::update(std::string d)
{
	_data=d;
	affichage();
}

