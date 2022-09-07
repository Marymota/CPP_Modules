#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include "ICharacter.hpp"

class Character : public ICharacter{
	public:
		Character();
		Character(const Character&);
		Character& operator=(const Character&);
		~Character();

		Character(std::string const&);

		std::string const & getName() const;

		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);


};

#endif