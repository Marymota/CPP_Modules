#include "../inc/Character.hpp"

Character::Character() : max_equiped(4) {
	for(int i = 0; i < max_equiped; i++)
		_inventory[i] = 0;
};

Character::Character(const Character& obj) : max_equiped(4){
	_name = obj._name;
	for(int i = 0; i < max_equiped; i++)
		_inventory[i] = 0;
	for(int i = 0; i < max_equiped; i++)
		_inventory[i] = obj._inventory[i];
	slot = obj.slot;
};

Character& Character::operator=(const Character& obj) {
	_name = obj._name;
	for(int i = 0; i < max_equiped; i++)
		_inventory[i] = 0;
	for(int i = 0; i < max_equiped; i++)
		_inventory[i] = obj._inventory[i];
	slot = obj.slot;
	return (*this);
};

Character::~Character() {};

Character::Character(std::string const& name) : max_equiped(4) {
	slot = 0;
	_name = name;
}

std::string const& Character::getName() const {
	return _name;
}

void Character::equip(AMateria* m) {
	if  (slot < max_equiped) {
		_inventory[slot++] = m;
	}
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
	if (idx >= max_equiped) {
		std::cout << "This slot is empty" << std::endl;
		return;
	}
	_inventory[idx]->use(target);
};

