#include "../inc/Fixed.hpp"

/**********************************************************/
/*								ORTHODOX CANONICAL FORM									*/
/**********************************************************/

Fixed::Fixed( void ) : fx(0) {
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed( const Fixed& obj) {
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed& Fixed::operator = (const Fixed& obj) {
	std::cout << "Copy assignment operator called" << std::endl;
	fx = obj.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
};

/**********************************************************/
/*										OTHER CONSTRUCTORS									*/
/**********************************************************/

Fixed::Fixed(const int i) {
	std::cout << "Int constructor called" << std::endl;
	fx = i << _bits;	
	/*	Convert int to fixed-point number	
				fx = 10		-> 1010 
				fx = 2560	-> 1010 0000 0000
				i << _bits(8) = i * 256 			*/
};

Fixed::Fixed(const float f) {
	std::cout << "Float constructor called" << std::endl;
	fx = std::ceil(f * (1 << _bits));
	/* Convert float to fixed-point number 
				fx = 42.42		-> 101010.0110101110000101001
			 	fx = 10860		-> 101010 01101100 
				f << _bits(8) -> f * 256			*/
};

/**********************************************************/
/*										MEMBER FUNCTIONS										*/
/**********************************************************/

int Fixed::getRawBits( void ) const {
	return fx;
}

void Fixed::setRawBits( int const raw ) {
	fx = raw;
}

int Fixed::toInt( void ) const {
	return fx >> _bits;
	/*	Convert fixed-point number to int	
		i >> _bits(8) = i / 256 				*/
};

float Fixed::toFloat( void ) const {
	return ((float)fx) / (1 << _bits);
}

/**********************************************************/
/*					OVERLOAD OF THE INSERTION OPERATOR (<<)				*/
/**********************************************************/

std::ostream& operator << (std::ostream& out, const Fixed& obj) {
	return out << obj.toFloat();
}
/*	Inserts a floating-point representation of the fixed-point number 
		into the output stream object passed as a parameter */


/* 	Resources: 
		https://inst.eecs.berkeley.edu/~cs61c/sp06/handout/fixedpt.html
		https://www.3dgep.com/cpp-fast-track-14-fixed-point/
		https://stackoverflow.com/questions/28483652/float-to-fixed-conversion
		https://stackoverflow.com/questions/39925020/rounding-up-and-down-a-number-c	
*/