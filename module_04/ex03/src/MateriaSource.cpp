#include "../inc/MateriaSource.hpp"
#include "../inc/Ice.hpp"
#include "../inc/Cure.hpp"

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource default constructor" << std::endl;
};

MateriaSource::MateriaSource(const MateriaSource& obj) : IMateriaSource() {
	std::cout << "MateriaSource copy constructor" << std::endl;
	*this = obj;
};

MateriaSource& MateriaSource::operator=(const MateriaSource& obj) {
	_name = obj._name;
	for(int i = 0; i < max; i++)
		_forge[i] = 0;
	for(int i = 0; i < max; i++)
		_forge[i] = obj._forge[i];
	slot = obj.slot;
	std::cout << "ICharacter copy assignment operator" << std::endl;
	return (*this);
};


MateriaSource::~MateriaSource() {};

std::string const& MateriaSource::getName() const {
	return _name;
}

void MateriaSource::learnMateria(AMateria*){};

AMateria* MateriaSource::createMateria(std::string const & type) {
	AMateria* tmp;
	if (type == "cure")
		tmp = new Cure();
	else if (type == "ice")
		tmp = new Ice();
	else
		return 0;
	return tmp;
};