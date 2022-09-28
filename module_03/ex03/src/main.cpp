#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"
#include "../inc/DiamondTrap.hpp"

int main () {
	int count = 6;

	DiamondTrap p1("P1");
	DiamondTrap p2("P2");
	DiamondTrap p3("P3");
	std::cout << std::endl;
	while (count--) { 
		p3.attack("P1");
		p1.takeDamage(p3.getDmg());
	}
	std::cout << std::endl;

	p1.highFivesGuys();
	p1.whoAmI();
	std::cout << std::endl;

	return (0);
}



