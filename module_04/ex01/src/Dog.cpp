#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Brain.hpp"

Dog::Dog() {
	std::cout << "Dog Constructor" << std::endl;
	_type = "Dog";
	_brain = new Brain;
};

Dog::Dog(const Dog& obj) {
	std::cout << "Dog Copy Constructor" << std::endl;
	_type = obj._type;
	_brain = new Brain(*obj._brain);
}

Dog& Dog::operator=(const Dog& obj) {
	std::cout << "Dog Copy assignment Operator" << std::endl;
	if (this == &obj)
		return *this;
	_type = obj._type;
	*_brain = *obj._brain;
	return *this;
};

Dog::~Dog() {
	delete _brain;
	std::cout << "Dog Destructor" << std::endl;
};

void Dog::makeSound() const {
	std::cout << "Bark Bark!" << std::endl;
}


// Testing deep copy of _Brain
void Dog::getIdeas() {
	for (int i = 0; i < 3; i++) {
		std::cout << "idea: " << _brain->ideas[i] << std::endl;
	}
}

void Dog::setIdeas(std::string idea, int n) {
	_brain->ideas[n] = idea;
}
