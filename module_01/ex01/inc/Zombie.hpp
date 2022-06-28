#pragma once
#ifndef	__ZOMBIE_H_
#define __ZOMBIE_H_

#include <iostream>
#include <string>

class Zombie {

	public:
		Zombie(std::string name);
		Zombie( void );
		~Zombie( void );

		void setName(std::string name);
		void announce(void);

	private:
		std::string _name;		
};

Zombie* zombieHorde( int N, std::string name);

#endif /* __ZOMBIE_H */