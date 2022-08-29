#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/Brain.hpp"


Brain::Brain() {
	std::cout << "Brain Constructor" << std::endl;
};

Brain::Brain(const Brain& obj) {
	std::cout << "Brain Copy Constructor" << std::endl;
	*this = obj;
};

Brain& Brain::operator=(const Brain& ) {
	std::cout << "Brain Copy assignment Operator" << std::endl;
	return (*this);
};

Brain::~Brain() {
	std::cout << "Brain Destructor" << std::endl;
};

