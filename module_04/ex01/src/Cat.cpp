#include "../inc/Animal.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Brain.hpp"

Cat::Cat() {
	std::cout << "Cat Constructor" << std::endl;
	_type = "Cat";
	_brain = new Brain();
};

Cat::Cat(const Cat& obj) {
	std::cout << "Cat Copy Constructor" << std::endl;
	_type = obj._type;
	_brain = new Brain(*obj._brain);
}; 

Cat& Cat::operator=(const Cat& obj) {
	std::cout << "Cat Copy assignment Operator" << std::endl;
	if (this == &obj)
		return *this;
	_type = obj._type;
	*_brain = *obj._brain;
	return *this;
};

Cat::~Cat() {
	delete _brain;
	std::cout << "Cat Destructor" << std::endl;
};

void Cat::makeSound() const{
	std::cout << "Miau Miau!" << std::endl;
}

// Testing deep copy of _Brain
void Cat::getIdeas() {
	for (int i = 0; i < 3; i++) {
		std::cout << "idea: " << _brain->ideas[i] << std::endl;
	}
}

void Cat::setIdeas(std::string idea, int n) {
	_brain->ideas[n] = idea;
}