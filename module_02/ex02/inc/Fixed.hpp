#ifndef __FIXED_HPP__
#define	__FIXED_HPP__

#include <iostream>
#include <cmath>

class Fixed {														// Class definition
	
	public:																// Public members	

/**********************************************************/
/*								ORTHODOX CANONICAL FORM									*/
/**********************************************************/
																
		Fixed();														// Default constructor													
		Fixed(const Fixed&);								// Copy constructor		
		Fixed& operator= ( const Fixed& );	// Copy assignment operator overload	
		~Fixed();														// Destructor

/**********************************************************/
/*										OTHER CONSTRUCTORS									*/
/**********************************************************/

		Fixed(const int);										// Constructor with integer parameter
		Fixed(const float);									// Constructor with integer parameter

/**********************************************************/
/*										MEMBER FUNCTIONS										*/
/**********************************************************/

		int		getRawBits ( void ) const;		// Return the raw value of the fixed-point number
		void	setRawBits ( int const raw );	// Sets the raw value of the fixed-point number

		int		toInt( void ) const;					// Converts the fixed-point value to an integer value
		float	toFloat( void ) const;				// Converts the fixed-point value to a float value

/**********************************************************/
/*									OPERATOR OVERLOADING									*/
/**********************************************************/
/*									ARITHMETIC OPERATORS									*/
		Fixed	operator+(const Fixed&);
		Fixed	operator-(const Fixed&);
		Fixed	operator*(const Fixed&);
		Fixed	operator/(const Fixed&);	

/*							INCREADE /DECREASE OPERATORS							*/
		Fixed&	operator++();								// Prefix increment operator
		Fixed		operator++(int);						// Postfix increment operator
		Fixed&	operator--();								// Prefix increment operator
		Fixed		operator--(int);						// Postfix increment operator	

/**********************************************************/
/*										MEMBER VARIABLES										*/
/**********************************************************/

	private:															// Private members

		int fx;															// Fixed-point number value
		static const int _bits = 8;					// Number of fractional bits

};

/**********************************************************/
/*										OVERLOAD OPERATORS									*/
/**********************************************************/

std::ostream& operator << (std::ostream& out, const Fixed& obj); 
																				// overload operator <<


#endif