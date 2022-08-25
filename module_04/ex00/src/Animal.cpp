#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

Animal::Animal() {
	std::cout << "Animal Constructor" << std::endl;
	type = "";
};

Animal::Animal(const Animal& obj) {
	*this = obj;
};

Animal& Animal::operator=(const Animal& obj) {
	type = obj.type;
	return (*this);
};

Animal::~Animal() {};

std::string Animal::getType() const {
	return type;
}

void Animal::makeSound() const{
	std::cout << " *  * " << std::endl;
}