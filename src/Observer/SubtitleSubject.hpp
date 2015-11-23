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
		SubtitleSubject(sfe::Movie *m);
			/*
			 * @brief Getteur
			 * @return _retour la dernière donnée retirée du fichier en format txt.
			 */	
		std::string getData();
			/*
			 * @brief Setteur mettant à jour modifiant la data
			 * @param la nouvelle data
			 *
			 */
		void setData(std::string l);
			/*
			 * @brief Ajout un Observer
			 * @param l'observer à ajouter
			 * @return _retour 1 si l'observer a été ajouté
			 *
			 */
		int addObs(Observer* o);
			/*
			 * @brief Supprime un Observer
			 * @param l'observer à supprimer
			 * @return _retour 1 si l'observer a été trouvé et supprimé sinon -1
			 *
			 */
		int removeObs(Observer* o);
			/*
			 * @brief Notifie l'ensemble des observers ajoutés à au vecteur
			 *
			 */
		void notifierObs();

		void floatToString(float i);
		int stringToFloat(std::string t);
		bool isDigit(std::string s);

};

#endif