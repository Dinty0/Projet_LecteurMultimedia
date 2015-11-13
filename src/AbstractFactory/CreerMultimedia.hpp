/**
 * @file CreerMultimedia.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe CreerMultimedia (superclasse de "audio","video","image"), s'occupant de créer le media demandé (video, audio, image)
 */

#ifndef CREERMULTIMEDIA_H
#define CREERMULTIMEDIA_H

class CreerMultimedia
{
	public:
		/**
		 * @brief Fonction abstraite qui force les classes filles a implémenter une fonction "creerMultimedia"
		 *
		 */
		virtual void creerMultimedia()=0;
		/**
		 * @brief Fonction abstraite qui force les classes filles a implémenter une fonction "creerBoutons"
		 *
		 */
		virtual void creerBoutons()=0;
		/**
		 * @brief Fonction abstraite qui force les classes filles a implémenter une fonction "creerFormat"
		 *
		 */
		virtual void creerFormat()=0;
};

#endif