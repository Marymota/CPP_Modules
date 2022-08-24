#ifndef __SCAVTRAP_HPP__
# define __SCAVTRAP_HPP__

#include "../inc/ClapTrap.hpp"

#include <iostream>
#include <string>

class ScavTrap : public ClapTrap {

	public:
		ScavTrap();
		ScavTrap(const ScavTrap&);
		ScavTrap& operator=(const ScavTrap&);
		~ScavTrap();
	
		ScavTrap(std::string name);

		void attack(const std::string& target);

		void guardGate();
};

#endif