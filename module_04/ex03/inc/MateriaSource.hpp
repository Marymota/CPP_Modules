#ifndef __MATERIASOURCE_HPP__
#define __MATERIASOURCE_HPP__

#include <iostream>
#include "IMateriaSource.hpp"

// Base class
class MateriaSource : public IMateriaSource {

	public:
		MateriaSource();
		MateriaSource(const MateriaSource&);
		MateriaSource& operator=(const MateriaSource&);
		~MateriaSource();

	protected:
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
		std::string const& getName() const;
		std::string _name;
};

#endif