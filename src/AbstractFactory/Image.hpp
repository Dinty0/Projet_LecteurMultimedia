/**
 * @file image.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe Image, gérant l'utilisation d'un fichier image
 */

#ifndef IMAGE_H
#define IMAGE_H

#include "CreerMultimedia.hpp"
#include "BoutonsI.hpp"
#include <vector>

class Format;

class Image : public CreerMultimedia
{
	private:
		std::vector<BoutonsI> _boutons;
		Format* _format;

	public:

		/**
		 * @brief Constructeur
		 *
		 */
		Image();

		/**
		 * @brief Crée les boutons et le format adéquats pour le fichier à traiter
		 *
		 */
		void creerMultimedia();

		/**
		 * @brief Crée les boutons adéquats pour le fichier à traiter
		 *
		 */
		void creerBoutons();

		/**
		 * @brief Crée le format adéquat pour le fichier à traiter
		 *
		 */
		void creerFormat();

};

#endif