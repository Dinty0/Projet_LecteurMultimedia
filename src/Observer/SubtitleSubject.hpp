/**
 * @file SubtitleSubject.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe SubtitleSubject , contenant les méthodes du sujet à observer
 */

#ifndef SUBTITLESUBJECT_HPP
#define SUBTITLESUBJECT_HPP
#include "Subject.hpp"
#include <sfeMovie/Movie.hpp>
#include <vector>
#include <ctime>


class SubtitleSubject : public Subject
{
	private:
		std::vector<Observer*> _list;
		std::string _subtitleLine;
		sfe::Movie *_movie;
		std::string _start;
		std::string _end;
		std::string _chrono;

	public:	
		/**
		 * @brief Constructeur
		 * 
		 * @param sfe::Movie *m : pointeur vers sfe::Movie 
		 */
		SubtitleSubject(sfe::Movie *m);

		/**
		 * @brief Accesseur
		 * @return _retour la dernière donnée retirée du fichier en format txt.
		 */	
		std::string getData();

		/**
		 * @brief Accesseur mettant à jour modifiant la data
		 * @param la nouvelle data
		 *
		 */
		void setData(std::string l);

		/**
		 * @brief Ajout un Observer
		 * @param l'observer à ajouter
		 * @return _retour 1 si l'observer a été ajouté
		 *
		 */
		int addObs(Observer* o);

		/**
		 * @brief Supprime un Observer
		 * @param l'observer à supprimer
		 * @return _retour 1 si l'observer a été trouvé et supprimé sinon -1
		 *
		 */
		int removeObs(Observer* o);

		/**
		 * @brief Notifie l'ensemble des observers ajoutés à au vecteur
		 *
		 */
		void notifyObs();

		/**
		 * @brief Transforme un float en String
		 * @param le float a modifier
		 */
		void floatToString(float i);

		/**
		 * @brief Modifie un string en float 
		 * @param la chaine de caractere a modifier
		 * @return _retour retourne le float
		 *
		 */
		float stringToFloat(std::string t);

		/**
		 * @brief Test si une chaine de caractère ne contient que des chiffres
		 * @param la chaine de caracteres a tester
		 * @return _retour retourne 1 si vraie sinon 0
		 *
		 */
		bool isDigit(std::string s);

};

#endif