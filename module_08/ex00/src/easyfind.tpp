#include <iostream>	
#include <algorithm>	// std::find
#include <iterator>		// std::iterator
#include <vector>

template <typename T>
void easyfind(T container, int n) {

	std::vector<int>::iterator it;
	std::vector<int> myvector (container, container+5);

	it = std::find(myvector.begin(), myvector.end(), n);
	if (it != myvector.end())
		std::cout << "Found!" << std::endl;
	else
		std::cout << "Not found!" << std::endl;
}