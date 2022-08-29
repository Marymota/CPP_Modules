#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap() { std::cout << "A ClapTrap was created" << std::endl; }

ClapTrap::ClapTrap(const ClapTrap &obj) {
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj) {
	std::cout << "Copy assignment operator called" << std::endl;
	_name = obj._name;
	_hp = obj._hp;
	_energy = obj._energy;
	_dmg = obj._dmg;
	return *this;
}

ClapTrap::~ClapTrap() { std::cout << "ClapTrap " << _name << " was destroyed" << std::endl; }

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _energy(10), _dmg(0) {
	std::cout << "ClapTrap " << _name << " was created" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (_hp <= 0)
		std::cout << "ClapTrap " << _name << " can't attack. He is already dead... " << std::endl;
	else if (_energy > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target 
		<< ", causing " << _dmg << " points of damage!" << std::endl;
		_energy--;
	}
	else {
		std::cout << "ClapTrap " << _name 
		<< " doesn't have enough energy to attack!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp == 0) {
		std::cout << "ClapTrap " << _name 
		<< " can't take damage. Claptrap already dead... " << std::endl;
	}
	else if ((unsigned int)_hp > amount)
	{
		_hp -= amount;
		std::cout << "ClapTrap " << _name << " took " << amount 
		<< " points of damage. " << _hp << " HP left!" << std::endl;
	}
	else
	{
		_hp = 0;
		std::cout << "ClapTrap " << _name << " took " << amount 
		<< " points of damage. " << _name << " was killed!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hp == 0) {
		std::cout << "ClapTrap " << _name 
		<< " can't be repaired. Claptrap already dead...." << std::endl;
	}
	else if (_hp + amount < 10 && _energy > 0)
	{
		_hp += amount;
		std::cout << "ClapTrap " << _name << " repaired " << amount 
		<< " points. It has " << _hp << " HP left!" << std::endl;
		_energy--;
	}
	else if (_energy == 0) {
		std::cout << "ClapTrap " << _name 
		<< " doesn't have enought energy to be repaired" << std::endl;
	}
	else
	{
		amount = 10 - _hp;
		_hp = 10;
		std::cout << "ClapTrap " << _name << " repaired " << amount 
		<< " points. Max HP " << _hp << std::endl;
	}
}
