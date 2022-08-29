#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Brain.hpp"

Animal::Animal() {
	std::cout << "Animal Constructor" << std::endl;
	type = "";
};

Animal::Animal(const Animal& obj) {
	std::cout << "Animal Copy Constructor" << std::endl;
	*this = obj;
};

Animal& Animal::operator=(const Animal& obj) {
	std::cout << "Animal Copy assignment Operator" << std::endl;
	type = obj.type;
	return (*this);
};

Animal::~Animal() {
	std::cout << "Animal Destructor" << std::endl;
};

std::string Animal::getType() const {
	std::cout << "Get Type:" << std::endl;
	return type;
}

void Animal::makeSound() const{
	std::cout << "***" << std::endl;
}

