#include "../inc/ScavTrap.hpp"
#include "../inc/ClapTrap.hpp"
#include "../inc/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() { 
	_hp = 100;
	_energy = 100;
	_dmg = 30;
	std::cout << "A FragTrap was created" << std::endl; 
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj) {
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = obj;
}

FragTrap& FragTrap::operator=(const FragTrap& obj) {
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	ClapTrap::operator=(obj);
	return *this;
}

FragTrap::~FragTrap() { std::cout << "FragTrap " << _name << " was destroyed" << std::endl; }

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	_hp = 100;
	_energy = 100;
	_dmg = 30;
	std::cout << "FragTrap " << _name << " was created" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
	if (_hp <= 0)
		std::cout << "FragTrap " << _name << " can't attack. He is already dead... " << std::endl;
	else if (_energy > 0)
	{
		std::cout << "FragTrap " << _name << " stabs " << target 
		<< ", causing " << _dmg << " points of damage!" << std::endl;
		_energy--;
	}
	else {
		std::cout << "FragTrap " << _name 
		<< "> doesn't have enough energy to attack!" << std::endl;
	}
}

void FragTrap::highFivesGuys(void) {
	 std::cout << "FragTrap " << _name << " requests a High Five!" <<  std::endl;
}
