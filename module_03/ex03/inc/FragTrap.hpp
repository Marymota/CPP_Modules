#ifndef __FRAGTRAP_HPP__
# define __FRAGTRAP_HPP__

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"

#include <iostream>
#include <string>

/* THE DIAMOND PROBLEM 
When using virtual inheritance, we are guaranteed 
to get only a single instance of the common base class.
The DiamondTrap class will have only a single instance
of the ClapTrap class, shared by both the ScavTrap and 
FragTrap classes.
*/

class FragTrap : virtual public ClapTrap {

	public:
		FragTrap();
		FragTrap(const FragTrap&);
		FragTrap& operator=(const FragTrap&);
		~FragTrap();
	
		FragTrap(std::string name);
		
		void attack(const std::string& target);

		void highFivesGuys(void);
};

#endif