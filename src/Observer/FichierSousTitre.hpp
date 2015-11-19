#ifndef FICHIERSOUSTITRES_HPP
#define FICHIERSOUSTITRES_HPP
#include "Sujet.hpp"
#include <vector>
#include <ctime>


class FichierSousTitre : public Sujet
{
	private:
		std::vector<Observer*> liste_;
		std::string donnee_;
		std::string deb_;
		std::string fin_;
	public:	
		FichierSousTitre();
			/*
			 * @brief Getteur
			 * @return _retour la dernière donnée retirée du fichier en format txt.
			 */	
		std::string getDonnee();
			/*
			 * @brief Ajout un Observer
			 * @param l'observer à ajouter
			 * @return _retour 1 si l'observer a été ajouté
			 *
			 */
		void setDonnee(std::string l);
			/*
			 * @brief Ajout un Observer
			 * @param l'observer à ajouter
			 * @return _retour 1 si l'observer a été ajouté
			 *
			 */
		int enregistrerObs(Observer* o);
			/*
			 * @brief Supprime un Observer
			 * @param l'observer à supprimer
			 * @return _retour 1 si l'observer a été trouvé et supprimé sinon -1
			 *
			 */
		int supprimerObs(Observer* o);
			/*
			 * @brief Notifie l'ensemble des observers ajoutés à au vecteur
			 *
			 */
		void notifierObs();
		bool isDigit(std::string s);

};

#endif