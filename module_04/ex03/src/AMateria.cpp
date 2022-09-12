#include "../inc/AMateria.hpp"

// AMateria constructor always recieves a type
AMateria::AMateria(std::string const& type) {
	_type = type;
};

std::string const& AMateria::getType() const {
	return(_type);
};

void AMateria::use(ICharacter& target) {
	(void) target;
};

AMateria::~AMateria() {};
