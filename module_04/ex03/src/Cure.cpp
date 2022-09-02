#include "../inc/AMateria.hpp"
#include "../inc/Cure.hpp"

Cure::Cure() {
	std::cout << "Cure default constructor" << std::endl;
};

Cure::Cure(std::string const& type) {
	std::cout << "Cure constructor with type" << std::endl;
	_type = type;
};

Cure::Cure(const Cure& obj) {
	std::cout << "Cure copy constructor" << std::endl;
	*this = obj;
};

Cure& Cure::operator=(const Cure& obj) {
	std::cout << "Cure copy assignment operator" << std::endl;
	_type = obj._type;
	return (*this);
};

Cure::~Cure() {};

AMateria*	Cure::clone() const {
	AMateria* obj = new Cure();
	return obj;
};
