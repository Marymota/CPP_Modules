#ifndef __BSP_HPP__
#define	__BSP_HPP__

#include "../inc/Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);
float area(Fixed ax, Fixed ay, Fixed bx, Fixed by, Fixed cx, Fixed cy);

#endif