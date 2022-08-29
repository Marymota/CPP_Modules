#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat Constructor" << std::endl;
	type = "Cat";
};

WrongCat::WrongCat(const WrongCat& obj) {
	std::cout << "WrongCat Copy Constructor" << std::endl;
	*this = obj;
}; 

WrongCat& WrongCat::operator=(const WrongCat& obj) {
	std::cout << "WrongCat Copy assignment Operator" << std::endl;
	type = obj.type;
	return *this;
};

WrongCat::~WrongCat() {
	std::cout << "Cat Destructor" << std::endl;
};

void WrongCat::makeSound() const{
	std::cout << "Miau Miau!" << std::endl;
}