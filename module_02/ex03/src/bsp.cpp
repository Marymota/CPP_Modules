#include "../inc/Fixed.hpp"
#include "../inc/Point.hpp"
#include "../inc/bsp.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point) {

	std::cout << std::endl;
	std::cout << "b.x: " << b.gety() << std::endl;
	std::cout << std::endl;

	float _area = area (a.getx(), a.gety(), b.getx(), b.gety(), c.getx(), c.gety());
	float _a = area (point.getx(), point.gety(), b.getx(), b.gety(), c.getx(), c.gety());
	float _b = area (a.getx(), a.gety(), point.getx(), point.gety(), c.getx(), c.gety());
	float _c = area (a.getx(), a.gety(), b.getx(), b.gety(), point.getx(), point.gety());
	
	std::cout << "area = " << _area << std::endl;
	std::cout << "a = " << _a << std::endl;
	std::cout << "b = " << _b << std::endl;
	std::cout << "c = " << _c << std::endl;
	std::cout << "abc = " << _a + _b + _c << std::endl;

	if (_area == 0 || _a == 0 || _b == 0 || _c == 0)
		return (0);
	return (_area == _a + _b + _c);
}

float area(float ax, float ay, float bx, float by, float cx, float cy)
{ 
	float Area = ((ax * (by - cy) + bx * (cy - ay) \
+ cx * (ay - by)) / (float)2.0);

	if (Area < 0)
		return Area * -1;
	else if (Area == 0)
		return (0);
	else
		return (Area);
}
