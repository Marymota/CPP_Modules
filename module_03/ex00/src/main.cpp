#include "../inc/ClapTrap.hpp"

int main () {

	ClapTrap p1("Gill");
	ClapTrap p2("Cloud");
	std::cout << std::endl;
	p1.attack("Cloud");
	p2.takeDamage(0);
	std::cout << std::endl;
	p2.takeDamage(5);
	p2.beRepaired(2);
	std::cout << std::endl;
	p1.attack("Cloud");
	p1.attack("Cloud");
	p1.attack("Cloud");
	p1.attack("Cloud");
	p1.attack("Cloud");
	p1.attack("Cloud");
	p1.attack("Cloud");
	p1.attack("Cloud");
	p1.attack("Cloud");
	std::cout << std::endl;
	p2.takeDamage(9);
	std::cout << std::endl;
	p2.beRepaired(2);
	std::cout << std::endl;
	return (0);
}