#include "AbstractFactory/imageInterfaceFactory.hpp"
#include "Dir/Dir.hpp"

class Image
{
	private:
		Interface _i;
		Dir _dir;
	
	public:
		/**
		 * @brief Constructeur
		 * 
		 * @param ImageInterfaceFactory* iiFact : factory de l'interface image
		 */
		Image(ImageInterfaceFactory* iiFact);

		/**
		 * @brief Destructeur
		 * 
		 */
		~Image();

		/**
		 * @brief fonction de test de création
		 * 
		 */
		void afficher();

		/**
		 * @brief lance l'image et permet a l'utilisateur d'effectuer des actions dessus.
		 * 
		 */
		void run();

};