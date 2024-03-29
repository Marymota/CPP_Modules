#ifndef __AMATERIA_HPP__
#define __AMATERIA_HPP__

#include <iostream>
#include "ICharacter.hpp"
class ICharacter;

class AMateria {

	protected:
		std::string _type; //	[...]
		
	public:
		AMateria();
		AMateria(const AMateria&);
		AMateria(std::string const & type);
		virtual ~AMateria(); //	[...]

		std::string const& getType() const; //Returns the materia type

		virtual AMateria*	clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif