#include "../inc/MateriaSource.hpp"
#include "../inc/Ice.hpp"
#include "../inc/Cure.hpp"

MateriaSource::MateriaSource() : max(4) {
	for(int i = 0; i < max; i++)
		_forge[i] = 0;
	slot = 0;
};

MateriaSource::MateriaSource(const MateriaSource& obj) : max(4) {
	for(int i = 0; i < max; i++) {
		if (obj._forge[i] != 0)
			this->_forge[i] = obj._forge[i];
		else
			this->_forge[i] = 0;
	}
	slot = obj.slot;
};

MateriaSource& MateriaSource::operator=(const MateriaSource& obj) {
	for(int i = 0; i < max; i++) {
		if (this->_forge[i] != 0)
			delete this->_forge[i];
		if (obj._forge[i] != 0)
			this->_forge[i] = obj._forge[i];
		else
			this->_forge[i] = 0;
	}
	slot = obj.slot;
	return (*this);
};

MateriaSource::~MateriaSource() {
	for(int i = 0; i < max; i++) {
		if (this->_forge[i] != 0)
			delete this->_forge[i];
	}
};

void MateriaSource::learnMateria(AMateria* obj){
	if (slot != 0 && slot != max) {
		_forge[slot++] = obj;
	}
};

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