#include "../inc/Zombie.hpp"

int main ()
{
	Zombie *zombie = newZombie("Tombi");
	zombie->announce();
	delete zombie;

	randomChump("Xabi");
	return (0);
}
