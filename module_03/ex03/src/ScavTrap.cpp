#include "../inc/ScavTrap.hpp"
#include "../inc/ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() { 
	_hp = 100;
	_energy = 50;
	_dmg = 20;
	std::cout << "A ScavTrap was created" << std::endl; 
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj) {
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = obj;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj) {
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	ClapTrap::operator=(obj);
	return *this;
}

ScavTrap::~ScavTrap() { std::cout << "ScavTrap " << _name << " was destroyed" << std::endl; }

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	_hp = 100;
	_energy = 50;
	_dmg = 20;
	std::cout << "ScavTrap " << _name << " was created" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (_hp <= 0)
		std::cout << "ScavTrap " << _name << " can't attack. He is already dead... " << std::endl;
	else if (_energy > 0)
	{
		std::cout << "ScavTrap " << _name << " slashes " << target 
		<< ", causing " << _dmg << " points of damage!" << std::endl;
		_energy--;
	}
	else {
		std::cout << "ScavTrap " << _name 
		<< "> doesn't have enough energy to attack!" << std::endl;
	}
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << _name 
	<< " is in Gate keeper mode" << std::endl;	
}
