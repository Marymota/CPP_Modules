#ifndef __CLAPTRAP_HPP__
# define __CLAPTRAP_HPP__

#include <iostream>
#include <string>

class ClapTrap {

	public:

		ClapTrap();
		ClapTrap(const ClapTrap&);
		ClapTrap& operator=(const ClapTrap&);
		~ClapTrap();
	
		ClapTrap(std::string name);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		int getDmg( void );

	protected:
		std::string _name;
		unsigned int _hp;
		unsigned int _energy;
		unsigned int _dmg;
};

#endif