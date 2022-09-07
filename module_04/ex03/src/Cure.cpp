#include "../inc/Cure.hpp"

Cure::Cure() {
	std::cout << "Cure default constructor" << std::endl;
	_type = "cure";
};

Cure::Cure(const Cure& obj) : AMateria() {
	std::cout << "Cure copy constructor" << std::endl;
	*this = obj;
};

Cure& Cure::operator=(const Cure& obj) {
	std::cout << "Cure copy assignment operator" << std::endl;
	(void) obj;
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