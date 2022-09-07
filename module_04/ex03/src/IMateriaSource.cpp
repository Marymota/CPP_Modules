#include "../inc/IMateriaSource.hpp"

IMateriaSource::IMateriaSource() : max(4) {
	std::cout << "IMateriaSource default constructor" << std::endl;
};

IMateriaSource::IMateriaSource(const IMateriaSource& obj) {
	std::cout << "IMateriaSource copy constructor" << std::endl;
	*this = obj;
};

IMateriaSource& IMateriaSource::operator=(const IMateriaSource& ) {
	std::cout << "IMateriaSource copy assignment operator" << std::endl;
	return (*this);
};
