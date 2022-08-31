#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Brain.hpp"

Animal::Animal() : _type("") {
	std::cout << "Animal Constructor" << std::endl;
};

Animal::Animal(const Animal& obj) {
	std::cout << "Animal Copy Constructor" << std::endl;
	*this = obj;
};

Animal& Animal::operator=(const Animal& obj) {
	std::cout << "Animal Copy assignment Operator" << std::endl;
	_type = obj._type;
	return (*this);
};

Animal::~Animal() {
	std::cout << "Animal Destructor" << std::endl;
};

std::string Animal::getType() const {
	std::cout << "Get Type: ";
	return _type;
}
