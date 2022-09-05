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

Character::~Character() {};

std::string const& Character::getName() const {
	return _name;
}

void Character::equip(AMateria* m) {
	_inventory[0] = m;
};

void Character::unequip(int idx) {
	(void) idx;
};

void Character::use(int idx, ICharacter& target) {
	(void) idx;
	(void) target;
};