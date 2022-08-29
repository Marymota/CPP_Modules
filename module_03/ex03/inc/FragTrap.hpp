#ifndef __FRAGTRAP_HPP__
# define __FRAGTRAP_HPP__

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"

#include <iostream>
#include <string>

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