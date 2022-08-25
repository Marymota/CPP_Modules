#ifndef __DIAMONDTRAP_HPP__
# define __DIAMONDTRAP_HPP__

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"

#include <iostream>
#include <string>

/* THE DIAMOND PROBLEM 
When using virtual inheritance, we are guaranteed 
to get only a single instance of the common base class.
The DiamondTrap class will have only a single instance
of the ClapTrap class, shared by both the ScavTrap and 
FragTrap classes.
*/

class DiamondTrap : public FragTrap, public ScavTrap {

	public:
		DiamondTrap();
		DiamondTrap(const DiamondTrap&);
		DiamondTrap& operator=(const DiamondTrap&);
		~DiamondTrap();
	
		DiamondTrap(std::string const name);

		/* Re-declaration of the "attack" function from the FragTrap 
		in current scope: the DiamondTrap class. */
		using FragTrap::attack;

		void whoAmI(void);
	
	private:
		std::string _clap_name;
};

#endif