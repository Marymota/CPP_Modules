#ifndef _EASYFIND_HPP_
#define _EASYFIND_HPP_

#include <iostream>	
#include <algorithm>	// std::find
#include <iterator>		// std::iterator
#include <vector>
#include <exception>

template <typename T>
void easyfind(T container, int n) {
	//std::vector<int>::iterator it;
	//it = std::find(container.begin(), container.end(), n);
	//if (it != container.end())
	//	std::cout << "Found!" << std::endl;
	//else
	//	std::cout << "Not found!" << std::endl;
	//return;

	// Binary search algorithm in STL
	if (std::binary_search(container.begin(), container.end(), n))
		std::cout << "Found!" << std::endl;
	else
		throw std::invalid_argument("Value not found!");

}

#endif