#include "../inc/Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
	Zombie* zombie_horde = new Zombie[N];		// Allocates memory in the heap to n number of zombie objects

	for (int i = 0; i < N; i++)
	{
		zombie_horde[i].setName(name);
	}

	return zombie_horde;
}