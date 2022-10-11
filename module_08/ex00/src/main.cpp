#include "../inc/easyfind.hpp"
#include "easyfind.tpp"

int main () {

	std::vector<int> myints;
	for(int i = 0; i < 6; i++)
		myints.push_back(i * 10);
	easyfind(myints, 0);
	easyfind(myints, 10);
	easyfind(myints, 20);
	easyfind(myints, 30);
	easyfind(myints, 40);
	easyfind(myints, 50);
	easyfind(myints, -5);
	easyfind(myints, 60);
	easyfind(myints, -40);
	easyfind(myints, 2);
}

// https://cplusplus.com/reference/vector/vector/ 

// Create a vector and fill it with 'push_back' keyword 