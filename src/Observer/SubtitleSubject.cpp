#include "SubtitleFile.hpp"
#include <iostream>
#include <fstream>
#include <iterator>
#include <algorithm>
#include <thread>
#include <locale> 
#include <chrono>
#include <string>
#include <stdlib.h>

SubtitleSubject::SubtitleSubject(sfe::Movie *m)
{
	_subtitleLine="";
	_movie=m;
	_chrono="00:00:00";
}

int SubtitleSubject::addObs(Observer* o)
{
	_liste.push_back(o);
	return 1;
}


int SubtitleSubject::removeObs(Observer *o)
{
	std::vector<Observer*>::iterator it = std::find(_list.begin(), _list.end(), o);
	if (it != _list.end())
	{
		_list.erase(it);
		return 1;
	}
	return -1;

}

void SubtitleSubject::notifyObs()
{
	for(Observer *o : _list )
	{
		o->update(_data);

	}
}

std::string SubtitleSubject::getData()
{
	return _data;
}

void SubtitleSubject::floatToString(float sec)
{	
	std::string heures;
	std::string minutes;
	std::string secondes;

	heures=to_string(sec/3600);
	sec=sec%3600;
	minutes=to_string(sec/60);
	sec=sec/60;
	secondes=to_string(sec);

	if(heures.size()<2)
	{
		heures="0"+heures;
	}
	if(minutes.size()<2)
	{
		minutes="0"+minutes;
	}
	if(secondes.size()<2)
	{
		secondes="0"+secondes;
	}

	_chrono=heures+":"+minutes+":"+secondes;
}


bool SubtitleSubject::isDigit(std::string s)
{
	for(unsigned int i=0; i<s.length(); ++i){
		int test = atoi(&s[i]);
		if(test>47 && test<58){
		
			return false;
		}
	}
	return true;

}

float SubtitleSubject::stringToFloat(std::string t)
{
	float timer= atoi(t.substr(0,2))*3600+atoi(t.substr(3,2))*60+atoi(t.substr(6,2));
	return timer;
}

void SubtitleSubject::setData(std::string name)
{	
	
	std::ifstream file(name);
	float sec;
	float end=stringToFloat(_end);
	float start=stringToFloat(_start);
	bool notify=false;

	while(!file.eof())
	{
		sec=_movie->PlayingOffset().asSeconds();
		floatToString(sec);
		if(end-sec<0)
		{
			getline(file, _data);
			_data.pop_back();
			while(_data.substr(13,3) != "-->")
			{
				getline(file, _data);
			}
			_data.pop_back();
			_start = _data.substr(0, 11);
			_end = _data.substr(17, 11);
			end=stringToFloat(_end);
			start=stringToFloat(_end);
			getline(file, _data);
			_data.pop_back();
			notify=false;
		}
		if (start-sec<0 && !notify)
		{
			notifyObs();
			notify=true;
		} /*else if(end-sec<0)
		{
			_data="";
			notifyObs();
		}*/

   		std::this_thread::sleep_for (std::chrono::seconds(1));

	}	
	

}


