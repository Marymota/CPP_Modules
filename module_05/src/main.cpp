#include "../inc/Bureaucrat.hpp"

int main (void) {

	try {
		Bureaucrat b("cloud", 200);
	}
	catch (const std::string msg){
		std::cout << msg << std::endl;
	}

	return 0;
}