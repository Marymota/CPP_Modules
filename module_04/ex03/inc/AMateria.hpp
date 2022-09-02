#ifndef __AMATERIA_HPP__
#define __AMATERIA_HPP__

#include <iostream>
#include "../inc/ICharacter.hpp"

// Base class
class AMateria {
	protected:
		std::string _type;
	public:
		AMateria();
		AMateria(const AMateria&);
		AMateria& operator=(const AMateria&);
		~AMateria();

		AMateria(std::string const&);

		std::string const& getType() const; // Returns the materia type

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif