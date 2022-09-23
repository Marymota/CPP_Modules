#ifndef __FIXED_HPP__
# define __FIXED_HPP__

#include <iostream>
#include <string>

class Fixed 
{
	public:

/**********************************************************/
/*				ORTHODOX CANONICAL FORM					  */
/**********************************************************/

		Fixed();						// Default constructor
		~Fixed();						// Destructor
		Fixed(Fixed&);					// Copy constructor	
		Fixed& operator = (Fixed&);		// Copy assignment operator overload

/**********************************************************/
/*						ACCESSORS						  */
/**********************************************************/
		int getRawBits( void ) const;		// returns the raw value of the fixed-point value
		void setRawBits( int const raw );	// sets the raw value of the fixed-point number
	
	private:
		int fixed_pt;						// Integer to store the fixed-point number value
		static const int fract_bits = 8;	// static constant integer to store the number of fractional bits
};

#endif