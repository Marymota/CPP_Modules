#include "../inc/Ice.hpp"

Ice::Ice() : AMateria("ice") {};

Ice::Ice(const Ice& obj) : AMateria(obj._type) {};

Ice& Ice::operator=(const Ice& obj) {
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