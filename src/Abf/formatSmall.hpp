/**
 * @file formatSmall.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe FormatSmall, permettant de créer le format "petit"
 */

#include "format.hpp"

class FormatSmall : public Format
{
	private:
		int _longueurLecteur;
		int _largeurLecteur;
	public:
		
		/**
		 * @brief Constructeur
		 * 
		 */
		FormatSmall();

		/*
		 * @brief Crée le format petit
		 * @return Un Format
		 *
		 */
		Format createFormat();
};