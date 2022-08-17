#include "../inc/bsp.hpp"
#include "../inc/Point.hpp"

int	main( void ) {

/* 
	Input: points a(a.x, a.y), b(b.x, b.y) and c(c.x, c.y);

		  		b(2,3)
				   /\
					/  \
	 			 /____\
		a(0,0) 	 	 c(4,0)

	1.	Calculate area of the triangle "abc"
			area =  a.x, a.y, b.x, b.y, c.x, c.y;
	2.	Calculate area of the triangles that contain the point:
			A - point, a, b;
			B - point, b, c;
			C - point, a, c;
	3.	If point is contained in the triangle:
				area = A + B + C; 		
*/ 
	Point a(0, 0);
	Point b(10, 30);
	Point c(20, 0);
	Point point(10, 0);

	if (bsp(a, b, c, point))
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;
		
	return 0;
}
