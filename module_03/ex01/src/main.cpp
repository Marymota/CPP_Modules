#include "../inc/ScavTrap.hpp"
#include "../inc/ClapTrap.hpp"

int main () {
	int count = 11;

	ClapTrap p0("P0");
	ClapTrap p01("P01");
	p0.attack("P01");
	p0.takeDamage(p01.getDmg());
	p0.beRepaired(10);
	std::cout << std::endl;

	ScavTrap p1("P1");
	ScavTrap p2("P2");
	ScavTrap p3("P3");
	std::cout << std::endl;
	while (count--) { p3.attack("P1"); }
	p1.takeDamage(p3.getDmg());
	std::cout << std::endl;
	p1.attack("P2");
	p2.takeDamage(p1.getDmg());
	p2.beRepaired(10);
	std::cout << std::endl;
	p1.attack("P3");
	p3.takeDamage(p1.getDmg());
	p3.beRepaired(20);
	p3.attack("P1");
	std::cout << std::endl;
	p1.guardGate();
	std::cout << std::endl;
	/* A derived class needs to access methods and attributes of the base class.
	A base class doesn't need to access elements of the derived class. 
	Because of this, the derived object is always destroyed first. */
	return (0);
}