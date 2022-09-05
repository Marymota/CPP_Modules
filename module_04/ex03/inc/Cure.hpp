#ifndef __CURE_HPP__
#define __CURE_HPP__

#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria {

	public:
		Cure();
		Cure(const Cure&);
		Cure& operator=(const Cure&);
		~Cure();
		Cure(std::string const&);

		AMateria*	clone() const;
};

#endif