#ifndef __MATERIASOURCE_HPP__
#define __MATERIASOURCE_HPP__

#include "IMateriaSource.hpp"

// Base class
class MateriaSource : public IMateriaSource {

	public:
		MateriaSource();
		MateriaSource(const MateriaSource&);
		MateriaSource& operator=(const MateriaSource&);
		~MateriaSource();

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);

	private:
		AMateria* _forge[4];
		const int max;
		int slot;
};

#endif