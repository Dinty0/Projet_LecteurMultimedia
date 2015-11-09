/**
 * @file video.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe Video, gérant l'utilisation d'un fichier Video
 */

#ifndef VIDEO_H
#define VIDEO_H


#include "CreerMultimedia.hpp"

class Boutons;
class Format;

class Video : public CreerMultimedia
{
	private:
		Boutons* _boutons;
		Format*	_format;

	public:

		/**
		 * @brief Constructeur
		 *
		 */
		Video();

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