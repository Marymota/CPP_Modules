#ifndef __SCAVTRAP_HPP__
# define __SCAVTRAP_HPP__

#include "../inc/ClapTrap.hpp"

#include <iostream>
#include <string>

/* THE DIAMOND PROBLEM 
When using virtual inheritance, we are guaranteed 
to get only a single instance of the common base class.
The DiamondTrap class will have only a single instance
of the ClapTrap class, shared by both the ScavTrap and 
FragTrap classes.
*/

class ScavTrap : virtual public ClapTrap {

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