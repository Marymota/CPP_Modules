#include "../inc/Point.hpp"

Point::Point() : x(0), y(0) {};

Point::Point(const Point& obj) {
	*this = obj;
};

Point& Point::operator=(const Point& obj) {
	x = obj.x;
	y = obj.y;
	
	return *this;
}

Point::~Point(){};

Point::Point(const float fx, const float fy) {
	x = fx;
	y = fy;
}

Fixed Point::getx() const {
	return x;
}

Fixed Point::gety() const{
	return y;
}