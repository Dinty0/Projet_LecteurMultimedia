#ifndef DIR_H
#define DIR_H

#include <vector>
#include <string>
#include <TGUI/TGUI.hpp>
#include <boost/filesystem.hpp>
#include <boost/range/iterator_range.hpp>

class Dir
{

	private:
		std::vector<std::string> _filesVector;
		tgui::ListBox::Ptr _listBox;

	public:
		Dir();
		void setFilesVector(std::string path);
		std::vector<std::string> getFilesVector();
		void createDirWidget(tgui::Gui* gui);
		std::string returnPath(int id);
		int getItemSelected();
		void setSelectedItem(int i);
		void hide();
		std::string getItem(int i);

};

#endif

