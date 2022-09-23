#include "../inc/Fixed.hpp"

/**********************************************************/
/*								ORTHODOX CANONICAL FORM									*/
/**********************************************************/

Fixed::Fixed( void ) : fx(0) {
};

Fixed::Fixed( const Fixed& obj) {
	*this = obj;
}

Fixed& Fixed::operator = (const Fixed& obj) {
	fx = obj.getRawBits();
	return *this;
}

Fixed::~Fixed() {
};

/**********************************************************/
/*										OTHER CONSTRUCTORS									*/
/**********************************************************/

Fixed::Fixed(const int i) {
	fx = i << _bits;	
	/*	Convert int to fixed-point number	
				fx = 10		-> 1010 
				fx = 2560	-> 1010 0000 0000
				i << _bits(8) = i * 256 			*/
};

Fixed::Fixed(const float f) {
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
/*									OPERATOR OVERLOADING									*/
/**********************************************************/
/*									COMPARISSON OPERATORS									*/

bool Fixed::operator	>	(const Fixed& obj) const { if( fx >	 obj.fx) { return true; } else { return false; }}
bool Fixed::operator	>=	(const Fixed& obj) const { if( fx >= obj.fx) { return true; } else { return false; }}
bool Fixed::operator	<	(const Fixed& obj) const { if( fx <	 obj.fx) { return true; } else { return false; }}
bool Fixed::operator	<=	(const Fixed& obj) const { if( fx <= obj.fx) { return true; } else { return false; }}
bool Fixed::operator	==	(const Fixed& obj) const { if( fx == obj.fx) { return true; } else { return false; }}
bool Fixed::operator	!=	(const Fixed& obj) const { if( fx != obj.fx) { return true; } else { return false; }}

/*									ARITHMETRIC OPERATORS									*/
// [ !!! ] This may not work in all situations since fx is not a float 
// but a fixed-point number so I need more testing...

Fixed Fixed::operator+(const Fixed& obj) { fx += obj.toFloat() ; return *this; }
Fixed Fixed::operator-(const Fixed& obj) { fx -= obj.toFloat() ; return *this; }
Fixed Fixed::operator*(const Fixed& obj) { fx *= obj.toFloat() ; return *this; }
Fixed Fixed::operator/(const Fixed& obj) { fx /= obj.toFloat() ; return *this; }

/*							INCREMENT / DECREMENT OPERATORS						*/

Fixed& Fixed::operator++() {		// Prefix increment operator
	++fx;
	return *this;
}
// Increments the object value and returns it by reference

Fixed Fixed::operator++(int) {	// postfix increment operator
	Fixed tmp(*this);
	++(*this);
	return tmp;
}
/* A copy of the object is created so that we can increment 
the value but return the previous value;
[!] -> The integer parameter serves only to distinguish 
between the prefix and postfix functions */

Fixed& Fixed::operator--() {		// Prefix decrement operator
	--fx;
	return *this;
}

Fixed Fixed::operator--(int) {	// Postfix decrement operator
	Fixed tmp(*this);
	--(*this);
	return tmp;
}

Fixed& Fixed::max(Fixed& x, Fixed& y)
{
	if (x > y)
		return x;
	return y;
}

const Fixed& Fixed::max(const Fixed& x, const Fixed& y)
{
	if (x > y)
		return x;
	return y;
}

Fixed& Fixed::min(Fixed& x, Fixed& y)
{
	if (x < y)
		return x;
	return y;
}

const Fixed& Fixed::min(const Fixed& x, const Fixed& y)
{
	if (x < y)
		return x;
	return y;
}


/**********************************************************/
/*					OVERLOAD OF THE INSERTION OPERATOR (<<)				*/
/**********************************************************/

std::ostream& operator << (std::ostream& out, const Fixed& obj) {
	return out << obj.toFloat();
}
/*	Inserts a floating-point representation of the fixed-point number 
		into the output stream object passed as a parameter */


/****************************/
/*				RESOURCES					*/
/****************************/
/* 	
		C++ Cookbook: Solutions and Examples for C++ Programmers (Cookbooks (O'Reilly)) 1st Edition
		by D. Ryan Stephens, Christopher Diggins, Jonathan Turkanis & Jeff Cogswell
		Chapters:
			8.13 Overloading the Increment and Decrement Operators (318)
*/