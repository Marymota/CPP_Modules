#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"
#include "../inc/DiamondTrap.hpp"

int main () {
	int count = 11;

	DiamondTrap p1("P1");
	FragTrap p2("P2");
	ClapTrap p3("P3");
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
	p1.highFivesGuys();
	std::cout << std::endl;
	p1.attack("P2");
	p2.takeDamage(p1.getDmg());
	p1.attack("P2");
	p2.takeDamage(p1.getDmg());
	p1.attack("P2");
	p2.takeDamage(p1.getDmg());
	p1.attack("P2");
	p2.takeDamage(p1.getDmg());
	p1.attack("P2");
	p2.takeDamage(p1.getDmg());
	std::cout << std::endl;
	p1.whoAmI();
	std::cout << std::endl;

	return (0);
}

	/*	Resources:

			"Using-declaration"
			https://en.cppreference.com/w/cpp/language/using_declaration

			"Solvind the Diamond Problem with Virtual Inheritance"
			https://www.cprogramming.com/tutorial/virtual_inheritance.html

	
	 A derived class needs to access methods and attributes of the base class.
	A base class doesn't need to access elements of the derived class. 
	Because of this, the derived object is always destroyed first. */