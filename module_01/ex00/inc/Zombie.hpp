#pragma once
#ifndef	__ZOMBIE_H_
#define __ZOMBIE_H_

#include <iostream>
#include <string>

class Zombie {

	public:

		Zombie(std::string name);
		~Zombie( void );
		void announce (void);

	private:

		std::string name;		
};

#endif /* __ZOMBIE_H */