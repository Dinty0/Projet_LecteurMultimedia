#include <iostream>
#include "Dir.hpp"
#define THEME_CONFIG_FILE "src/widgets/Black.conf"

Dir::Dir()
{

}

void Dir::setFilesVector(std::string path)
{

	boost::filesystem::path p(path);

	 if(boost::filesystem::is_directory(p)) {

        for(auto& entry : boost::make_iterator_range(boost::filesystem::directory_iterator(p), {}))
            _filesVector.push_back(entry.path().string());
     }

}

std::vector<std::string> Dir::getFilesVector()
{
	return _filesVector;
}

void Dir::createDirWidget(tgui::Gui* gui)
{
	char c= '/';
	int i;
	int id=0;
	tgui::ListBox::Ptr listBox(*gui);
	listBox->load(THEME_CONFIG_FILE);
	listBox->setSize(250, 250);
	listBox->setItemHeight(20);
	listBox->setPosition(300, 90);
	listBox->bindCallback(tgui::ListBox::ItemSelected);
	listBox->setCallbackId(5);

    for(std::string s: _filesVector )
	{
		i=s.size()-1;
		while(c!=s[i])
		{
			--i;
		}
		listBox->addItem(s.substr(i+1, s.size()-1),id);
		++id;
	}
	_listBox=listBox;
	gui->add(_listBox,"dirListBox");

}

void Dir::hide()
{
	_listBox->hide();
}

void Dir::setSelectedItem(int i)
{
	_listBox->setSelectedItem(i);
}

std::string Dir::returnPath(int id)
{
	return _filesVector.at(id);
}

std::string Dir::getItem(int id)
{
	return _listBox->getItem(id);
}

int Dir::getItemSelected(){
	return _listBox->getSelectedItemId();
}