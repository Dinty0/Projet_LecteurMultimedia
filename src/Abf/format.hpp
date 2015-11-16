/**
 * @file format.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Interface Format, permettant de créer le format adéquat selon le type de média
 */

class Format
{
	public:		
		/*
		 * @brief Crée le format adéquat selon le type de média
		 * @return Un Format
		 *
		 */
		virtual Format createFormat()=0;
};
