#ifndef __WHATEVER_HPP__
#define __WHATEVER_HPP__

#include <iostream>

// Does not return so it needs to pass arguments as reference 
template <class T>
void swap(T& x, T& y) 
{
	T t;
	t = x;
	x = y;
	y = t;
}

template <class T>
T min(T x, T y) { return (x<y?x:y); }

template <class T>
T max(T x, T y) { return (x>y?x:y); }

#endif