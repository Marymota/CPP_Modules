#include "../inc/AMateria.hpp"

AMateria::AMateria() : _type("") {};

AMateria::AMateria(std::string const& type) {
	_type = type;
};

AMateria::AMateria(const AMateria& obj) {
		_type = obj._type;
}

std::string const& AMateria::getType() const {
	return(_type);
};

void AMateria::use(ICharacter& target) {
	(void) target;
};

AMateria::~AMateria() {};
