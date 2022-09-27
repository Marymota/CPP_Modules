#include "../inc/Bureaucrat.hpp"
#include "../inc/Exception.hpp"
#include "../inc/Form.hpp"

#include <iostream>
#include <exception>


// Implement Form::beSigned
// Implement Bureaucrat::signForm

static void gradetoohigh() {
	std::cout << "< Grade too high >" << std::endl;
	try {
		Form form("form", -3, 10);
	}
	catch (const std::exception& e){
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;
}

static void gradetoolow() {
	std::cout << "< Grade too low >" << std::endl;
	try {
		Form form("form", 5, 200);
		Bureaucrat cloud("Cloud", 5);

		std::cout << form << std::endl;
		std::cout << cloud << std::endl;
		form.beSigned(cloud);
		std::cout << form << std::endl;
	}
	catch (const std::exception& e){
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;
}

static void gradevalid() {
	std::cout << "< Valid Grade >" << std::endl;
	try {
		Form form("form", 120, 20);
		Bureaucrat cloud("Cloud", 1);
		std::cout << form << std::endl;
		std::cout << cloud << std::endl;
		form.beSigned(cloud);
		std::cout << form << std::endl;
	}
	catch (const std::exception& e){
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	std::cout << std::endl;
}

static void already_signed() {
	std::cout << "< Can Sign >" << std::endl;
	std::cout << std::endl;
	try {
		Form form("form", 120, 20);
		Bureaucrat cloud("Cloud", 1);
		std::cout << form << std::endl;
		cloud.signForm(form);
		std::cout << form << std::endl;
		cloud.signForm(form);
	}
	catch (std::exception& e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
		std::cout << std::endl;
}

int main (void) {
	gradetoohigh();
	gradetoolow();
	gradevalid();
	already_signed();

	return 0;
}