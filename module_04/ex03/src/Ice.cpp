#include "../inc/Ice.hpp"

Ice::Ice() {
	std::cout << "Ice default constructor" << std::endl;
};

Ice::Ice(std::string const& type) {
	std::cout << "Ice constructor with type" << std::endl;
	_type = type;
};

Ice::Ice(const Ice& obj) : AMateria() {
	std::cout << "Ice copy constructor" << std::endl;
	*this = obj;
};

Ice& Ice::operator=(const Ice& obj) {
	std::cout << "Ice copy assignment operator" << std::endl;
	_type = obj._type;
	return (*this);
};

Ice::~Ice() {};

AMateria*	Ice::clone() const {
	AMateria* obj = new Ice();
	return obj;
};

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}