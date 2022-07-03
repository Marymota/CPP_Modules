/* Create objects with static or dynamic allocation */
#include "../inc/Zombie.hpp"

int main ()
{
	Zombie *zombie = newZombie("Tombi");	// Allocate zombie
	zombie->announce();										// Prints message with zombie name
	delete zombie;												// Delete zombie

	randomChump("Xabi");
	return (0);
}