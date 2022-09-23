#include "../inc/Fixed.hpp"

int main () {

	Fixed a;			// 1. Default constructor called
	Fixed b( a ); 		// 2. Copy constructor called; 
	Fixed c;			// 5. Default constructor called
	
	c = b;				// 6. Copy assignment operator called
	
	std::cout << a.getRawBits() << std::endl; // 8. getRawBits member function called
	std::cout << b.getRawBits() << std::endl; // 9. getRawBits member function called
	std::cout << c.getRawBits() << std::endl; // 10. getRawBits member function called

	return (0);
}