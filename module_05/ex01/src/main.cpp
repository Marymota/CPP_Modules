#include "../inc/Bureaucrat.hpp"
#include "../inc/Exception.hpp"
#include "../inc/Form.hpp"

#include <iostream>
#include <exception>


// Implement Form::beSigned
// Implement Bureaucrat::signForm

static void gradetoohigh() {
	try {
		Form form("A", -3, 10);
	}
	catch (const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
}

static void signtoolow() {
	try {
		Form form("A", 5, 200);
		Bureaucrat cloud("Cloud", 5);

		std::cout << form << std::endl;
		std::cout << cloud << std::endl;
		form.beSigned(cloud);
		std::cout << form << std::endl;
	}
	catch (const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
}

static void gradevalid() {
	try {
		Form form("A", 120, 20);
		Bureaucrat cloud("Cloud", 5);

		std::cout << form << std::endl;
		std::cout << cloud << std::endl;
		form.beSigned(cloud);
		std::cout << form << std::endl;
	}
	catch (const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
}

int main (void) {
	gradetoohigh();
	signtoolow();
	gradevalid();

	return 0;
}