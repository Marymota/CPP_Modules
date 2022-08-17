#ifndef __POINT_HPP__
#define __POINT_HPP__

#include <iostream>
#include <cmath>
#include "./Fixed.hpp"

class Point {

	public:
		Point();
		Point(const Point&);
		Point& operator=(const Point&);
		~Point();

		Point(const float x, const float y);
		Fixed getx() const;
		Fixed gety() const;
		
	private:
		Fixed x;
		Fixed y;
};

#endif