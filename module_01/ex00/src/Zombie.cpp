#include "../inc/Zombie.hpp"

// constructor with name attribute
Zombie::Zombie(std::string name)
{
	this->name = name;
}

// prints announcement message
void Zombie::announce( void )
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// destructor
Zombie::~Zombie( void )
{
	std::cout << this->name << " died!\n";
}