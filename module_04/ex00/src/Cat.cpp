#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

Cat::Cat() {
	std::cout << "Cat Constructor" << std::endl;
	type = "Cat";
};

Cat::Cat(const Cat& obj) {
	*this = obj;
}; 

Cat& Cat::operator=(const Cat& obj) {
	type = obj.type;
	return *this;
};

Cat::~Cat() {};

void Cat::makeSound() const{
	std::cout << "Miau Miau!" << std::endl;
}