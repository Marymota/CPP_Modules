// Create a class in Orthodox Canonical Form that represents a fixed-point number:
// • Private members:
// ◦ An integer to store the fixed-point number value.
// ◦ A static constant integer to store the number of fractional bits. Its value
// will always be the integer literal 8.
// • Public members:
// ◦ A default constructor that initializes the fixed-point number value to 0.
// ◦ A copy constructor.
// ◦ A copy assignment operator overload.
// ◦ A destructor.
// ◦ A member function int getRawBits( void ) const;
// that returns the raw value of the fixed-point value.
// ◦ A member function void setRawBits( int const raw );
// that sets the raw value of the fixed-point number.

#include "../inc/Fixed.hpp"

// Default Constructor
Fixed::Fixed() : fixed_pt(0) {
	std::cout << "Default constructor called" << std::endl;
}

// Copy Constructor	
Fixed::Fixed(Fixed& obj) {
	std::cout << "Copy constructor called" << std::endl;
	*this = obj; // *this (object b) will be equal to object a; Fixed b( a );
}

// Copy assignment Operator
Fixed& Fixed::operator = (Fixed& obj) {
	std::cout << "Copy assignment operator called" << std::endl;
	fixed_pt = obj.getRawBits();
	return *this;
}

// Destructor
Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
};

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return fixed_pt;
}

void Fixed::setRawBits( int const raw ) {
	fixed_pt = raw;
}