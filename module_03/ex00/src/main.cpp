#include "../inc/ClapTrap.hpp"

int main () {
	ClapTrap gil("Gil");
	ClapTrap cloud("Cloud");
	gil.attack("Cloud");
	cloud.takeDamage(5);
	cloud.beRepaired(2);
	gil.attack("Cloud");
	cloud.takeDamage(7);
	cloud.attack("Gil");
	cloud.takeDamage(7);
	gil.attack("Cloud");
	gil.attack("Cloud");
	gil.attack("Cloud");
	gil.attack("Cloud");
	gil.attack("Cloud");
	gil.attack("Cloud");
	gil.attack("Cloud");
	gil.attack("Cloud");
	gil.attack("Cloud");
	cloud.beRepaired(2);
	return (0);
}