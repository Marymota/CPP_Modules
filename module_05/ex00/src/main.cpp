#include "../inc/Bureaucrat.hpp"

#include <iostream>
#include <exception>

static void formvalid() {
	std::cout << "--------------" << std::endl;
	std::cout << "| Valid Form |" << std::endl;
	std::cout << "--------------" << std::endl;
	try {
		Form form("Form", 5, 10);
		std::cout << form << std::endl;
	}
	catch (const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
}

static void signform() {
	std::cout << "-------------" << std::endl;
	std::cout << "| Sign Form |" << std::endl;
	std::cout << "-------------" << std::endl;
	try {
		Bureaucrat cloud("Cloud", 1);
		Form form("Form", 5, 10);
		std::cout << cloud << std::endl;
		std::cout << form << std::endl;
		cloud.signForm(form);
		std::cout << cloud << std::endl;
		std::cout << form << std::endl;
	}
	catch (const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
}

static void dontsignform() {
	std::cout << "--------------" << std::endl;
	std::cout << "| !Sign Form |" << std::endl;
	std::cout << "--------------" << std::endl;
	try {
		Bureaucrat cloud("Cloud", 10);
		Form form("Form", 5, 10);
		std::cout << cloud << std::endl;
		std::cout << form << std::endl;
		cloud.signForm(form);
		std::cout << cloud << std::endl;
		std::cout << form << std::endl;
	}
	catch (const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
}

int main (void) {
	formvalid();
	signform();
	dontsignform();

	return 0;
}