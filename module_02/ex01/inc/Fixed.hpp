#ifndef __FIXED_HPP__
#define	__FIXED_HPP__

#include <iostream>
#include <cmath>

class Fixed {

	private:
		int fx;
		static const int _bits = 8;

	public:
		Fixed();
		Fixed(const Fixed&);
		Fixed& operator= ( const Fixed& );
		~Fixed();

		int		getRawBits ( void ) const;
		void	setRawBits ( int const raw );

		Fixed(const int);
		Fixed(const float);

		int toInt( void ) const;
		float toFloat( void ) const;

};

std::ostream& operator << (std::ostream& out, const Fixed& obj);


#endif