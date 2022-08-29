#ifndef __FIXED_HPP__
# define __FIXED_HPP__

#include <iostream>
#include <string>

class Fixed 
{
	public:

/**********************************************************/
/*								ORTHODOX CANONICAL FORM									*/
/**********************************************************/

		Fixed();													// Default constructor
		~Fixed();													// Destructor
		Fixed(Fixed&);										// Copy constructor	
		Fixed& operator = (Fixed&);				// Copy assignment operator

/**********************************************************/
/*												ACCESSORS						 						*/
/**********************************************************/
		int getRawBits( void ) const;
		void setRawBits( int const raw );
	
	private:
		int fixed_pt;
		static const int fract_bits = 8;
};

#endif