#ifndef SOUSTITRES_HPP
#define SOUSTITRES_HPP

#include "Observer.hpp"


class SousTitres : public Observer
{
	private:
			std::string donnee_;
			Sujet *sujet_;

	public:
			/*
			 * @brief Constructeur
			 * @param le sujet a observer
			 */
			SousTitres(Sujet *s);

			void affichage();
			
			/*
			 * @brief mise a jour de la donnée
			 * @param une chaine de caractères.
			 *
			 */
			void update(std::string d);
};

#endif