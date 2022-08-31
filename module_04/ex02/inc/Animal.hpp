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
		virtual ~Animal();
		
		virtual void makeSound() const = 0;
		std::string getType() const;

	protected:
		std::string _type;
};

#endif