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

Brain& Brain::operator=(const Brain& obj) {
	std::cout << "Brain Copy assignment Operator" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = obj.ideas[i];
	return (*this);
};

Brain::~Brain() {
	std::cout << "Brain Destructor" << std::endl;
};

// Testing deep copy of _Brain
void Brain::getIdeas() {
	for (int i = 0; i < 3; i++) {
		std::cout << "idea: " << ideas[i] << std::endl;
	}
}

void Brain::setIdeas(std::string idea, int n) {
	ideas[n] = idea;
}
