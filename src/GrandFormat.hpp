/**
 * @file GrandFormat.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe GrandFormat, générant le format adéquat pour une image ou une video
 */

#ifndef GRANDFORMAT_H
#define GRANDFORMAT_H

#include "Format.hpp"

class GrandFormat : public Format
{
	private:
		const int _longueurLecteur = 1200;
		const int _largueurLecteur = 1080;

	public:
		GrandFormat();
		void creerGrandFormat();
		void creerPetitFormat();
};

#endif