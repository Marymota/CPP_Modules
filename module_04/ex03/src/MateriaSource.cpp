#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource default constructor" << std::endl;
};

MateriaSource::MateriaSource(const MateriaSource& obj) : IMateriaSource() {
	std::cout << "MateriaSource copy constructor" << std::endl;
	*this = obj;
};

MateriaSource& MateriaSource::operator=(const MateriaSource& ) {
	std::cout << "MateriaSource copy assignment operator" << std::endl;
	return (*this);
};

MateriaSource::~MateriaSource() {};

std::string const& MateriaSource::getName() const {
	return _name;
}

void MateriaSource::learnMateria(AMateria*){};

AMateria* MateriaSource::createMateria(std::string const & type) {
	IMateriaSource* src = new MateriaSource();
	AMateria* tmp;
	if (type == "cure")
		tmp = src->createMateria("cure");
	else if (type == "ice")
		tmp = src->createMateria("ice");
	return tmp;
};