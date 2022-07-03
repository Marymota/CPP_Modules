/* Allocate a number of objects at the same time using new[] */
#include "../inc/Zombie.hpp"

int main ()
{
	Zombie* zombies = zombieHorde(5, "Xombi");

	int i = -1;
	while (++i < 5)
	{
		zombies[i].announce();
	}

	delete[] zombies;

	return (0);
}