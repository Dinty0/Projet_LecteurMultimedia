#ifndef SUBTITLELINEOBS_HPP
#define SUBTITLELINEOBS_HPP

#include "Observer.hpp"
#include <TGUI/TGUI.hpp>


class SubtitleLineObs : public Observer
{
	private:
			std::string _data;
			Subject *_subject;
			tgui::Label::Ptr _label;

	public:
			/*
			 * @brief Constructeur
			 * @param le sujet a observer
			 */
			SubtitleLineObs(Subject *s, tgui::Gui* gui);

			/*
			 * @brief accesseur data
			 * @return retourne une chaine de caractère
			 */

			std::string getData();

			/*
			 * @brief fonction d'affichage du widget
			 *
			 */
			void display();
			
			/*
			 * @brief mise a jour de la donnée
			 * @param une chaine de caractères.
			 *
			 */
			void update(std::string d);
};

#endif