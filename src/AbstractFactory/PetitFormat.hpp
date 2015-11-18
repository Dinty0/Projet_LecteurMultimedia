/**
 * @file PetitFormat.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe PetitFormat, générant le format adéquat pour un audio
 */


#ifndef PETITFORMAT_H
#define PETITFORMAT_H


#include "Format.hpp"


class PetitFormat : public Format
{
	private:
		const int _longueurLecteur = 500;
		const int _largeurLecteur = 100;

	public:
		PetitFormat();
		void creerPetitFormat();
		void creerGrandFormat();
};

#endif