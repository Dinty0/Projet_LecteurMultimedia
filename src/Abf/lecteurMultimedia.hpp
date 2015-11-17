#ifndef LECTEURMULTIMEDIA_H
#define LECTEURMULTIMEDIA_H

class LecteurMultimedia
{
	private:
		Interface _interface;

	public:
		LecteurMultimedia(Media m);
		//Boutons getBoutons();
		//Format getFormat();
		void initialiser();
		int main();
};

#endif