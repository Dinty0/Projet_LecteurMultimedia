#ifndef SUBTITLELINEOBS_HPP
#define SUBTITLELINEOBS_HPP

#include "Observer.hpp"


class SubtitleLineObs : public Observer
{
	private:
			std::string _data;
			Subject *_subject;

	public:
			/*
			 * @brief Constructeur
			 * @param le sujet a observer
			 */
			SubtitleLineObs(Subject *s, tgui::Gui* gui);

			std::string getData();

			void display();
			
			/*
			 * @brief mise a jour de la donnée
			 * @param une chaine de caractères.
			 *
			 */
			void update(std::string d);
};

#endif