/**
 * @file Format.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe Format (super-classe de "petitFormat","grandFormat), générant le format demandé (petit ou grand selon le media)
 */

#ifndef FORMAT_H
#define FORMAT_H

class Format
{
	public:
		virtual void creerPetitFormat()=0;
		virtual void creerGrandFormat()=0;
};

#endif