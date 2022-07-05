#ifndef __HUMANB_H__
#define __HUMANB_H__

#include "Weapon.hpp"
#include <iostream>

class HumanB {

	private:
		std::string _name;
		Weapon* _weapon;

	public:
		HumanB();
		HumanB(std::string name);
		HumanB(std::string name, Weapon weapon);
		~HumanB();
		void attack();
		void setWeapon(Weapon& weapon);
};

#endif