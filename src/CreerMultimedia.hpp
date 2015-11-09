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
		virtual void creerMultimedia()=0;
		virtual void creerBoutons()=0;
		virtual void creerFormat()=0;
};

#endif