/**
 * @file Dir.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe Dir , contenant les méthodes pour acceder aux fichiers d'un dossier et les stockants
 */

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
		/*
			 * @brief Constructeur
		*/
		Dir();
		/*
			 * @brief accesseur, remplit le vecteur avec les chemins des fichiers
			 * @param chemin du repetoire ou se trouve les fichiers.
			 */
		void setFilesVector(std::string path);
		/*
			 * @brief accesseur du vecteur de paths
			 * @param le sujet a observer et une interface gui
			 * @return retourne le vecteur de chemins
			 */
		std::vector<std::string> getFilesVector();
			/*
			 * @brief Créé le widget de type ListBox.
			 * @param l'object gui ou l'on ajoute notre listBox
			 */

		void createDirWidget(tgui::Gui* gui);

		/*
			 * @brief Accesseur
			 * @param l'id du path dans le vecteur
			 * @return retourne le chemin complet d'un fichier.
		*/
		std::string returnPath(int id);
		/*
			 * @brief Accesseur
			 * @return retourne l'id de l'élément selectionné dans la listBox
		*/
		int getItemSelected();
		/*
			 * @brief Accesseur
			 * @param prend l'id de l'object qui vas être selectionné
			 * @return modifie l'object selectionné
		*/
		void setSelectedItem(int i);
		/*
			 * @brief Cache la listBox
		*/
		void hide();

		/*
			 * @brief Getteur
			 * @param l'id du path dans la listBox
			 * @return retourne le nom du fichier ainsi que son extension
		*/
		std::string getItem(int i);

};

#endif

