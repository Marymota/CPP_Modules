#ifndef __ICHARACTER_HPP__
#define __ICHARACTER_HPP__

#include <iostream>

class ICharacter {

	public:
		ICharacter();
		ICharacter(const ICharacter&);
		ICharacter& operator=(const ICharacter&);

		virtual ~ICharacter();
		virtual std::string const & getName() const = 0;
		//virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};
#endif