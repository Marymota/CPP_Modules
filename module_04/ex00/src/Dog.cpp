#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

Dog::Dog() {
	std::cout << "Dog Constructor" << std::endl;
	type = "Dog";
};

Dog::Dog(const Dog& obj) {
	*this = obj;
};

Dog& Dog::operator=(const Dog& obj) {
	type = obj.type;
	return *this;
};

Dog::~Dog() {};

void Dog::makeSound() const{
	std::cout << "Bark Bark!" << std::endl;
}