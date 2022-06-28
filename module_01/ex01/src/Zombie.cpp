#include "../inc/Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_name = name;
}

Zombie::Zombie( void )
{}

void Zombie::announce( void )
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << this->_name << " died!\n";
}