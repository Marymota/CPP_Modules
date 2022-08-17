#include "../inc/bsp.hpp"
#include "../inc/Point.hpp"

int	main( void ) {

	Point a(0, 0);
	Point b(2, 3);
	Point c(0, 5);
	Point point(1, 3);

	if (bsp(a, b, c, point))
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;
		
	return 0;
}