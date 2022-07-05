#ifndef __WEAPON_H__
# define __WEAPON_H__

#include <iostream>

class Weapon {

	private:
		std::string _type;
	
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();
		const std::string getType() ;	//Returns a const ref to 'type'
		void setType(std::string type);
};

#endif