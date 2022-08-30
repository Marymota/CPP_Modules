#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Brain.hpp"

Cat::Cat() {
	std::cout << "Cat Constructor" << std::endl;
	type = "Cat";
	_brain = new Brain();
};

Cat::Cat(const Cat& obj) {
	std::cout << "Cat Copy Constructor" << std::endl;
	*this = obj;
}; 

Cat& Cat::operator=(const Cat& obj) {
	std::cout << "Cat Copy assignment Operator" << std::endl;
	type = obj.type;
	_brain = new Brain(*obj._brain);
	return *this;
};

Cat::~Cat() {
	delete _brain;
	std::cout << "Cat Destructor" << std::endl;
};

void Cat::makeSound() const{
	std::cout << "Miau Miau!" << std::endl;
}