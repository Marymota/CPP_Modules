#ifndef __IMATERIASOURCE_HPP__
#define __IMATERIASOURCE_HPP__

#include <iostream>
#include "AMateria.hpp"
class AMateria;

// Base class
class IMateriaSource {

	public:
		IMateriaSource();
		IMateriaSource(const IMateriaSource& );
		IMateriaSource& operator=(IMateriaSource const& );
		virtual ~IMateriaSource() {}
		
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;

	protected:
		std::string _name;
		int max;
		AMateria* _forge[4];
		int slot;
};

#endif