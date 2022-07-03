#include "../inc/Zombie.hpp"

// Allocates a zombie on the heap
Zombie* newZombie( std::string name )
{
	Zombie *zombie = new Zombie(name);
	return (zombie);
}