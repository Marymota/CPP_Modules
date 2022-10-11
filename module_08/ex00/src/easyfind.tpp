#include <iostream>	
#include <algorithm>	// std::find
#include <iterator>		// std::iterator
#include <vector>

template <typename T>
void easyfind(T container, int n) {

	std::vector<int>::iterator it;
	int i = 0;
	while (container[i] != 0)
		i++;
	it = std::find(container.begin(), container.end(), n);
	if (it != container.end())
		std::cout << "Found!" << std::endl;
	else
		std::cout << "Not found!" << std::endl;
}

