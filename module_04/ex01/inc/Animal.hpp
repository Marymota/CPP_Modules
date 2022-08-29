#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <iostream>
#include <string>

#include "../inc/Brain.hpp"

class Animal {

	public:
		Animal();
		Animal(const Animal&);
		Animal& operator=(const Animal&);
		virtual ~Animal() = 0;
		
		void virtual makeSound() const;
		std::string getType() const;
		

	protected:
		std::string type;
};

#endif