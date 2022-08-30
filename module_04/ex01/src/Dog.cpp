#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Brain.hpp"

Dog::Dog() {
	std::cout << "Dog Constructor" << std::endl;
	type = "Dog";
	_brain = new Brain();
};

Dog::Dog(const Dog& obj) {
	std::cout << "Dog Copy Constructor" << std::endl;
	delete _brain;		// deallocate any value that this pointer is holding
	type = obj.type; 	// not a pointer; shallow copy is OK
	if (obj._brain) {
		_brain = new Brain(*obj._brain); // create a new brain and copy 'obj' contents to it
		// the Brain class =operator will do the copy of the ideas string 
	} else { _brain = 0; }

};

Dog& Dog::operator=(const Dog& obj) {
	std::cout << "Dog Copy assignment Operator" << std::endl;
	if (this == &obj) // self-assignment guard
		return *this;
	*this = obj;
	return *this;
};

Dog::~Dog() {
	delete _brain;
	std::cout << "Dog Destructor" << std::endl;
};

void Dog::makeSound() const {
	std::cout << "Bark Bark!" << std::endl;
}
