#include "SubtitleFile.hpp"
#include <iostream>
#include <fstream>
#include <iterator>
#include <algorithm>
#include <thread>
#include <locale> 
#include <chrono>
#include <stdlib.h>

SubtitleSubject::SubtitleSubject()
{
	_subtitleLine="";
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

void SubtitleSubject::ChronoAddOne()
{
	if(_chrono.substr(6,2).compare("59"))
	{
		_chrono.substr(6,2)="00";
		if(_chrono.substr(3,2).compare("59"))
		{
			_chrono.substr(3,2)="00";
			_chrono.substr(0,2) = std::to_string(1+std::stoi(_chrono.substr(0,2)));
		}
		else
		{
			_chrono.substr(3,2) = std::to_string(1+std::stoi(_chrono.substr(3,2)));
		}

	}
	else
	{
		_chrono.substr(6,2) = std::to_string(1+std::stoi(_chrono.substr(6,2)));

	}
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

void SubtitleSubject::setData(std::string name)
{	
	
	std::ifstream file(name);
	
	while(!file.eof())
	{
		
		getline(file, _data);
		_data.pop_back();
		if (!isDigit(_data) && !_data.empty())
		{

			if(_data.substr(13,3) == "-->")
			{
			
				_start = _data.substr(0, 11);
				_end = _data.substr(17, 11);
			 }
			else{
				notifierObs();
			}

		}
			
	
		 

    std::this_thread::sleep_for (std::chrono::seconds(1));
    }

}
