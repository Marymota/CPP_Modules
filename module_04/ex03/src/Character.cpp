#include "../inc/Character.hpp"

Character::Character() {
	std::cout << "Character default constructor" << std::endl;
};

Character::Character(const Character& obj) : ICharacter() {
	std::cout << "Character copy constructor" << std::endl;
	*this = obj;
};

Character& Character::operator=(const Character& ) {
	std::cout << "Character copy assignment operator" << std::endl;
	return (*this);
};

Character::~Character() {
		slot = 0;
};

Character::Character(std::string const& name) {
	_name = name;
	slot = 0;
}

std::string const& Character::getName() const {
	return _name;
}

void Character::equip(AMateria* m) {
	if  (slot < max_equiped)
		_inventory[slot++] = m;
	else {
		std::cout << "Your inventory is full" << std::endl;
		return;
	}
};

void Character::unequip(int idx) {
	if (_inventory[idx] != 0) {
		_inventory[idx] = 0;
		--slot; 
	}
	else {
		std::cout << "Nothing equiped!" << std::endl;
		return;
	}

};

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx >= slot) {
		std::cout << "Equip a Materia first" << std::endl;
		return;
	}
	_inventory[idx]->use(target);
};