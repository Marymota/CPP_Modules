#include <iostream>
#include "../inc/convert.hpp"

int main(int argc, char *argv[]) {

	if (argc != 2)
		return 0;

	Convert arg(argv[1]);
	std::cout << arg << std::endl;
	return 0;
}
