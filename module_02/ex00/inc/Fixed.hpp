#ifndef __FIXED_HPP__
# define __FIXED_HPP__

#include <iostream>
#include <string>

class Fixed 
{
	public:
		Fixed();													// Default Constructor
		~Fixed();													// Destructor
		Fixed(Fixed&);										// Copy Constructor	
		Fixed& operator = (Fixed&);				// Copy assignment Operator
		int getRawBits( void ) const;
		void setRawBits( int const raw );
	
	private:
		int fixed_pt;
		static const int fract_bits = 8;
};

#endif