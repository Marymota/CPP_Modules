#ifndef __IMATERIASOURCE_HPP__
#define __IMATERIASOURCE_HPP__

#include <iostream>
#include "../inc/ICharacter.hpp"

// Base class
class IMateriaSource {

	public:
		IMateriaSource();
		IMateriaSource(const IMateriaSource&);
		IMateriaSource& operator=(const IMateriaSource&);

		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;

};

#endif