#ifndef SOUSTITRES_HPP
#define SOUSTITRES_HPP

#include "Observer.hpp"


class SousTitres : public Observer
{
	private:
			std::string donnee_;
			Sujet *sujet_;

	public:
			SousTitres(Sujet *s);
			void affichage();
			void update(std::string d);
};

#endif