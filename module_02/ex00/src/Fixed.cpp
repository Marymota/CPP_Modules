#include "../inc/Fixed.hpp"

/**********************************************************/
/*					ORTHODOX CANONICAL FORM				  */
/**********************************************************/

// Default Constructor
Fixed::Fixed() : fixed_pt(0) {
	std::cout << "Default constructor called" << std::endl;
}

// Copy Constructor	
Fixed::Fixed(Fixed& obj) {
	std::cout << "Copy constructor called" << std::endl;
	*this = obj; // 3. Copy assignment operator called
}

// Copy assignment Operator
Fixed& Fixed::operator = (Fixed& obj) {
	std::cout << "Copy assignment operator called" << std::endl;
	fixed_pt = obj.getRawBits(); // 4. 7. getRawBits member function called
	return *this;
}

// Destructor
Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
};

/**********************************************************/
/*						ACCESSORS					   	  */
/**********************************************************/

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return fixed_pt;
}

void Fixed::setRawBits( int const raw ) {
	fixed_pt = raw;
}