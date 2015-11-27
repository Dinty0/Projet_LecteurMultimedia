/**
 * @file SubtitleLineObs.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe SubtitleLineObs , contenant les méthodes pour l'observeur.
 */

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
			/**
			 * @brief Constructeur
			 * @param le sujet a observer et une interface gui
			 */
			SubtitleLineObs(Subject *s, tgui::Gui* gui);

			/**
			 * @brief Accesseur data
			 * @return retourne une chaine de caractère
			 */

			std::string getData();

			/**
			 * @brief fonction d'affichage du widget
			 *
			 */
			void display();
			
			/**
			 * @brief mise a jour de la donnée
			 * @param une chaine de caractères.
			 *
			 */
			void update(std::string d);
};

#endif