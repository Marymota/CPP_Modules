#ifndef __ITER_HPP__
#define __ITER_HPP__

#include <iostream>
#include <cmath>

// EVALUATION TEST
 class Awesome
 {
 	public:
 		Awesome( void ) : _n( 42 ) { return; }
 		int get( void ) const { return this->_n; }
 	private:
 		int _n;
 };
 
 std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

// -------------------------------------------------------------------

template< typename T >
void mult( T const & x ) { std::cout << x * 2 << std::endl; return; }

template <typename T>
void iter(T* array, int len, void (*func)(T const&)) {
	if (array == NULL)
		return ;
	for(int i = 0; i < len; i++) {
		(*func)(array[i]);
	}
}

#endif