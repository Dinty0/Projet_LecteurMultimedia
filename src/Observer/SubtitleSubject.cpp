#include "SubtitleSubject.hpp"
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
	_list.push_back(o);
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
		o->update(_subtitleLine);

	}
}

std::string SubtitleSubject::getData()
{
	return _subtitleLine;
}

void SubtitleSubject::floatToString(float sec)
{	
	std::string heures;
	std::string minutes;
	std::string secondes;

	heures=std::to_string(sec/3600);
	sec=(int)sec%3600;
	minutes=std::to_string(sec/60);
	sec=sec/60;
	secondes=std::to_string(sec);

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
	float timer= atoi(t.substr(0,2).c_str())*3600+atoi(t.substr(3,2).c_str())*60+atoi(t.substr(6,2).c_str());
	return timer;
}

void SubtitleSubject::setData(std::string name)
{	
	//std::cout << name << std::endl;
	std::ifstream file(name);
	if(file)
	{
		float sec;
		float end=stringToFloat("00:00:00");
		float start;//=stringToFloat(_start);
		bool notify=false;

		//std::cout << "0.5" << std::endl;

		while(!file.eof())
		{
			sec=_movie->getPlayingOffset().asSeconds();	
			getline(file, _subtitleLine);

			if(_subtitleLine.size()>2)
			{
				if(_subtitleLine.substr(13,3) == "-->")
				{
					_subtitleLine.pop_back();
					_start = _subtitleLine.substr(0, 11);
					_end = _subtitleLine.substr(17, 11);
					//std::cout<<_subtitleLine<<std::endl;

					end=stringToFloat(_end);
					start=stringToFloat(_start);
					getline(file, _subtitleLine);
					_subtitleLine.pop_back();
					while(start-sec>0)
						{
							//std::cout<<sec<<std::endl;
							sec=_movie->getPlayingOffset().asSeconds();
							std::this_thread::sleep_for (std::chrono::seconds(1));
						}
					notifyObs();

					while(end-sec>0)
						{
							//std::cout<<sec<<std::endl;

							sec=_movie->getPlayingOffset().asSeconds();
							std::this_thread::sleep_for (std::chrono::seconds(1));
						}
						_subtitleLine="";
						notifyObs();
				}
			}
		}
	}	
}


