#include "../inc/ICharacter.hpp"

ICharacter::ICharacter() : max_equiped(4){
	std::cout << "ICharacter default constructor" << std::endl;
	for(int i = 0; i < max_equiped; i++)
		_inventory[i] = 0;
};

ICharacter::ICharacter(const ICharacter& obj) {
	std::cout << "ICharacter copy constructor" << std::endl;
	*this = obj;
};

ICharacter& ICharacter::operator=(const ICharacter& obj) {
	_name = obj._name;
	for(int i = 0; i < max_equiped; i++)
		_inventory[i] = 0;
	for(int i = 0; i < max_equiped; i++)
		_inventory[i] = obj._inventory[i];
	slot = obj.slot;
	std::cout << "ICharacter copy assignment operator" << std::endl;
	return (*this);
};
