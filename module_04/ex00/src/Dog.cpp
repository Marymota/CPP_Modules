#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

Dog::Dog() {
	std::cout << "Dog Constructor" << std::endl;
	type = "Dog";
};

Dog::Dog(const Dog& obj) {
	std::cout << "Dog Copy Constructor" << std::endl;
	*this = obj;
};

Dog& Dog::operator=(const Dog& obj) {
	std::cout << "Dog Copy assignment Operator" << std::endl;
	type = obj.type;
	return *this;
};

Dog::~Dog() {
	std::cout << "Dog Destructor" << std::endl;
};

void Dog::makeSound() const {
	std::cout << "Bark Bark!" << std::endl;
}