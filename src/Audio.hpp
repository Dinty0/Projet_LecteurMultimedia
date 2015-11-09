/**
 * @file audio.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe Audio, gérant l'utilisation d'un fichier audio
 */

#ifndef AUDIO_H
#define AUDIO_H
 
#include "CreerMultimedia.hpp"
#include "BoutonsVA.hpp"

class Format;

class Audio: public CreerMultimedia
{
	private:
		BoutonsVA _boutons; // Les boutons nécessaires
		Format*	_format; // Le format adéquat

	public:
		/**
		 * @brief Constructeur
		 *
		 */
		Audio();

		/**
		 * @brief Crée les boutons nécessaires et le format adéquat pour le fichier à traiter
		 *
		 */
		void creerMultimedia();

		/**
		 * @brief Crée les boutons nécessaires pour le fichier à traiter
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
