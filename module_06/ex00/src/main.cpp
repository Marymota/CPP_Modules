#include <iostream>
#include "../inc/convert.hpp"

int main(int argc, char *argv[]) {

	if (argc != 2) {
		std::cout << "No scalar type to be converted detected!" << std::endl;
		return 0;
	}
		Convert arg(argv[1]);
		return 0;
}
