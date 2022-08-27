#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

Cat::Cat() {
	std::cout << "Cat Constructor" << std::endl;
	type = "Cat";
};

Cat::Cat(const Cat& obj) {
	std::cout << "Cat Copy Constructor" << std::endl;
	*this = obj;
}; 

Cat& Cat::operator=(const Cat& obj) {
	std::cout << "Cat Copy assignment Operator" << std::endl;
	type = obj.type;
	return *this;
};

Cat::~Cat() {
	std::cout << "Cat Destructor" << std::endl;
};

void Cat::makeSound() const{
	std::cout << "Miau Miau!" << std::endl;
}