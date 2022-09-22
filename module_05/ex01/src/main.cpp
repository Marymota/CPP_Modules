#include "../inc/Bureaucrat.hpp"
#include "../inc/Exception.hpp"

#include <iostream>

int main (void) {

	try {
		Bureaucrat almound("Almound", -1);
	}
	catch (Exception& msg){
		std::cerr << "Exception: " << msg.getMessage() << std::endl;
	}
	std::cout << std::endl;

	try {
		Bureaucrat blind("Blind", 255);
	}
	catch (Exception& msg){
		std::cerr << "Exception: " << msg.getMessage() << std::endl;
	}
	std::cout << std::endl;

	try {
		Bureaucrat cloud("Cloud", 5);
		std::cout << cloud << std::endl;
		while (1) {
			cloud.increment();
			std::cout << cloud << std::endl; 
		}
	}
	catch (Exception& msg){
		std::cerr << "Exception: " << msg.getMessage() << std::endl;
	}
	std::cout << std::endl;

		try {
		Bureaucrat cloud("Cloud", 140);
		std::cout << cloud << std::endl;
		while (1) {
			cloud.decrement();
			std::cout << cloud << std::endl;
		}
	}
	catch (Exception& msg){
		std::cerr << "Exception: " << msg.getMessage() << std::endl;
	}
	std::cout << std::endl;

	return 0;
}