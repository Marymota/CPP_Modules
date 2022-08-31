#ifndef __WRONGANIMAL_HPP__
#define __WRONGANIMAL_HPP__

#include <iostream>
#include <string>

class WrongAnimal {

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal&);
		WrongAnimal& operator=(const WrongAnimal&);
		~WrongAnimal();

		void makeSound() const;
		std::string getType() const;

	protected:
		std::string type;
};

#endif