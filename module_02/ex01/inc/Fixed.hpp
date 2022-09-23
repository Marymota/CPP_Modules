#ifndef __FIXED_HPP__
#define	__FIXED_HPP__

#include <iostream>
#include <cmath>

class Fixed {								// Class definition

//---------------------------------------------------------
	
	public:									// Public members	

/**********************************************************/
/*				ORTHODOX CANONICAL FORM		       		  */
/**********************************************************/
																
		Fixed();							// Default constructor													
		Fixed(const Fixed&);				// Copy constructor		
		Fixed& operator= ( const Fixed& );	// Copy assignment operator overload	
		~Fixed();							// Destructor

/**********************************************************/
/*					OTHER CONSTRUCTORS					  */
/**********************************************************/

		Fixed(const int);			// Constructor with constant integer 
		Fixed(const float);			// Constructor with Floating-point number

/**********************************************************/
/*						MEMBER FUNCTIONS				  */
/**********************************************************/

		int		getRawBits ( void ) const;		// Return the raw value of the fixed-point number
		void	setRawBits ( int const raw );	// Sets the raw value of the fixed-point number

		int		toInt( void ) const;			// Converts the fixed-point value to an integer value
		float	toFloat( void ) const;			// Converts the fixed-point value to a float value

/**********************************************************/
/*						MEMBER VARIABLES				  */
/**********************************************************/

	private:															// Private members

		int fx;															// Fixed-point number value
		static const int _bits = 8;		// Number of fractional bits

};

/**********************************************************/
/*			OVERLOAD OF THE INSERTION OPERATOR (<<)		  */
/**********************************************************/

std::ostream& operator << (std::ostream& out, const Fixed& obj);

#endif