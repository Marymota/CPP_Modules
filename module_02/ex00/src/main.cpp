#include "../inc/Fixed.hpp"

int main () {

	Fixed a;			// Create object 'a'
	Fixed b( a ); // create an object 'b' that will be equal to object 'a'
	Fixed c;
	
	c = b;
	
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return (0);
}