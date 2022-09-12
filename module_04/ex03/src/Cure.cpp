#include "../inc/Cure.hpp"

Cure::Cure() : AMateria("cure"){};

Cure::Cure(const Cure& obj) : AMateria(obj._type) {};

Cure& Cure::operator=(const Cure& obj) {
	_type = obj._type;
	return (*this);
};

Cure::~Cure() {};

AMateria*	Cure::clone() const {
	AMateria* obj = new Cure();
	return obj;
};

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}