#include "../inc/Fixed.hpp"
#include "../inc/Point.hpp"
#include "../inc/bsp.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point) {

	float tri_area = area (a.getx(), a.gety(), b.getx(), b.gety(), c.getx(), c.gety());
	float tri_a = area (point.getx(), point.gety(), b.getx(), b.gety(), c.getx(), c.gety());
	float tri_b = area (a.getx(), a.gety(), point.getx(), point.gety(), c.getx(), c.gety());
	float tri_c = area (a.getx(), a.gety(), b.getx(), b.gety(), point.getx(), point.gety());
	
	std::cout << "tri_area = " << tri_area << std::endl;
	std::cout << "a = " << tri_a << std::endl;
	std::cout << "b = " << tri_b << std::endl;
	std::cout << "c = " << tri_c << std::endl;

	if (tri_area == 0 || tri_a == 0 || tri_b == 0 || tri_c == 0)
		return (0);
	return (tri_area == tri_a + tri_b + tri_c);
}

float area(Fixed ax, Fixed ay, Fixed bx, Fixed by, Fixed cx, Fixed cy)
{ 
	float Area = ((ax.toFloat() * (by.toFloat() - cy.toFloat()) + bx.toFloat() * (cy.toFloat() - ay.toFloat()) \
+ cx.toFloat() * (ay.toFloat() - by.toFloat())) / 2.0);

	if (Area < 0)
		return Area * -1;
	else if (Area == 0)
		return (0);
	else
		return (Area);
}
