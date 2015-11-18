/**
 * @file format.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Interface Format, permettant de créer le format adéquat selon le type de média
 */

#ifndef FORMAT_H
#define FORMAT_H

class Format
{
	public:	

		/*
		 * @brief Crée le format adéquat selon le type de média
		 * @return Un Format
		 *
		 */
		Format createFormat();
		int getLongueur();
		int getLargeur();
};

#endif