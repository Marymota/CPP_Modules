#include "../inc/Point.hpp"

Point::Point() : x(0), y(0) {
	std::cout << "Default construct" << std::endl;
};

Point::Point(const Point& obj): x(obj.x), y(obj.y) {
	*this = obj;
};

Point& Point::operator=(const Point& obj) {
	(void) obj;
	return *this;
}

Point::~Point(){};

Point::Point(const float fx, const float fy) : x(fx), y(fy){
	std::cout << "Param construct" << std::endl;
	std::cout << x << y << std::endl;
};

float Point::getx() const {
	return x.toFloat();
}

float Point::gety() const{
	return y.toFloat();
}