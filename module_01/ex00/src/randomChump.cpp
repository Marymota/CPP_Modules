#include "../inc/Zombie.hpp"

void	randomChump( std::string name)
{
	Zombie zombie(name);								// Create a zombie in the stack
	zombie.announce();									// Prints message
}