/**
 * @file interface.hpp
 * @author K.Gomes / K.Espasa
 * 
 * @brief Classe Interface
 */


class Interface
{
	private:
		vector<library::buttons> _b;
		Format _f;
	public:		
		
		/**
		 * @brief Constructeur
		 * 
		 */
		Interface(vector<library::buttons> b, Format f);

};