#ifndef __ICE_HPP__
#define __ICE_HPP__

#include "AMateria.hpp"

class Ice : public AMateria { 
	
	public:
		Ice();
		Ice(const Ice&);
		Ice& operator=(const Ice&);
		~Ice();
		Ice(std::string const&);

		AMateria*	clone() const;
		void use(ICharacter& target);
};

#endif