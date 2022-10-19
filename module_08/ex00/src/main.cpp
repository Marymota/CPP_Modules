#include "../inc/easyfind.hpp"

int main () {

	std::vector<int> myints;
	for(int i = 0; i < 6; i++)
		myints.push_back(i * 10);

	try {	easyfind(myints, 0);	} catch ( const std::invalid_argument& e ) {	std::cout << e.what() << std::endl; }
	try {	easyfind(myints, 10);	} catch ( const std::invalid_argument& e ) {	std::cout << e.what() << std::endl;};
	try {	easyfind(myints, 20);	} catch ( const std::invalid_argument& e ) {	std::cout << e.what() << std::endl;};
	try {	easyfind(myints, 30);	} catch ( const std::invalid_argument& e ) {	std::cout << e.what() << std::endl;};
	try {	easyfind(myints, 40); } catch ( const std::invalid_argument& e ) {	std::cout << e.what() << std::endl;};
	try {	easyfind(myints, 50);	} catch ( const std::invalid_argument& e ) {	std::cout << e.what() << std::endl;};
	try {	easyfind(myints, -5);	} catch ( const std::invalid_argument& e ) {	std::cout << e.what() << std::endl;};
	try {	easyfind(myints, 60);	} catch ( const std::invalid_argument& e ) {	std::cout << e.what() << std::endl;};
	try {	easyfind(myints, -40);} catch ( const std::invalid_argument& e ) {	std::cout << e.what() << std::endl;};
	try {	easyfind(myints, 2);	} catch ( const std::invalid_argument& e ) {	std::cout << e.what() << std::endl;};

}

// https://cplusplus.com/reference/vector/vector/ 
// studytonight.com/cpp/stl/stl-searching
