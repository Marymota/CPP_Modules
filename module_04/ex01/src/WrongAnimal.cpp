#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal Constructor" << std::endl;
	type = "";
};

WrongAnimal::WrongAnimal(const WrongAnimal& obj) {
	std::cout << "WrongAnimal Copy Constructor" << std::endl;
	*this = obj;
};

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj) {
	std::cout << "WrongAnimal Copy assignment Operator" << std::endl;
	type = obj.type;
	return (*this);
};

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Destructor" << std::endl;
};

std::string WrongAnimal::getType() const {
	std::cout << "Get Type:" << std::endl;
	return type;
}

void WrongAnimal::makeSound() const{
	std::cout << "***" << std::endl;
}

