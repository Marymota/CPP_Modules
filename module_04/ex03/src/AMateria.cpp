#include "../inc/AMateria.hpp"

AMateria::AMateria() {
	std::cout << "Materia default constructor" << std::endl;
};

AMateria::AMateria(std::string const& type) {
	std::cout << "Materia constructor with type" << std::endl;
	_type = type;
};

AMateria::AMateria(const AMateria& obj) {
	std::cout << "AMateria copy constructor" << std::endl;
	*this = obj;
};

AMateria& AMateria::operator=(const AMateria& obj) {
	std::cout << "Materia copy assignment operator" << std::endl;
	_type = obj._type;
	return (*this);
};

AMateria::~AMateria() {};

std::string const& AMateria::getType() const {
	return(_type);
};

void AMateria::use(ICharacter& target) {
	(void) target;
	std::cout << "use function " << std::endl;
}