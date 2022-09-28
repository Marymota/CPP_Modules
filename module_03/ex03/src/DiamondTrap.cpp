#include "../inc/ScavTrap.hpp"
#include "../inc/ClapTrap.hpp"
#include "../inc/FragTrap.hpp"
#include "../inc/DiamondTrap.hpp"

class Claptrap;

DiamondTrap::DiamondTrap() {
	std::cout << "A DiamondTrap was created" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const name) : ClapTrap(name + "_clap_name"){
	_name 		= name;
	_hp			= FragTrap::_hp;
	_energy 	= ScavTrap::_energy;
	_dmg 		= FragTrap::_dmg;

	std::cout << "DiamondTrap " << _name << " was created" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) : ClapTrap(), FragTrap(), ScavTrap(){
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = obj;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& obj) {
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
	_name = obj._name;
	ClapTrap::_name = obj.ClapTrap::_name;
	_hp = obj._hp;
	_energy = obj._energy;
	_dmg = obj._dmg;
	return *this;
}

DiamondTrap::~DiamondTrap() { std::cout << "DiamondTrap " << _name << " was destroyed" << std::endl; }

void DiamondTrap::whoAmI(void) {
	 std::cout << "DiamondTrap " << _name << " ClapTrap ID: " << ClapTrap::_name << std::endl;
}
