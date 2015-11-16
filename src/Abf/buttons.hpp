/**
 * @file buttons.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Interface Buttons, permettant de créer les boutons adéquats selon le type de média
 */

class Buttons
{
	public:
		/*
		 * @brief Crée les boutons adéquats selon le type de média
		 * @return Un vecteur de boutons
		 *
		 */
		virtual vector<library::buttons> createButtons()=0;
};