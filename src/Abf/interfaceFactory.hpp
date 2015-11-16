/**
 * @file interfaceFactory.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe InterfaceFactory, permettant de créer l'interface adéquate selon le type de média
 */


class interfaceFactory
{
	public:

		/*
		 * @brief Crée l'interface adéquate selon le type de média
		 * @return Une Interface
		 *
		 */
		virtual Interface createInterface()=0;
};