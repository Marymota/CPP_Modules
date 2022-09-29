#include "../inc/Bureaucrat.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"


#include <iostream>
#include <exception>

static void formvalid() {
	std::cout << "--------------" << std::endl;
	std::cout << "| Valid Form |" << std::endl;
	std::cout << "--------------" << std::endl;
	try {
		Bureaucrat A("A", 1);
		ShrubberyCreationForm form("home");
		form.execute(A);
		std::cout << std::endl;
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
		PresidentialPardonForm form("buzz");
		std::cout << cloud << std::endl;
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
		PresidentialPardonForm form("Form");
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