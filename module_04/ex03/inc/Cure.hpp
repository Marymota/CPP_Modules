#ifndef __CURE_HPP__
#define __CURE_HPP__

class Cure : public AMateria{ 
	Cure();
	Cure(const Cure&);
	Cure& operator=(const Cure&);
	~Cure();

	Cure(std::string const&);

	AMateria*	clone() const;

};

#endif