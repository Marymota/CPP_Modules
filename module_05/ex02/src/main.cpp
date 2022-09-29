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
		RobotomyRequestForm form("home");
		A.executeForm(form);
		std::cout << std::endl;
	}
	catch (const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
}


int main (void) {
	formvalid();

	return 0;
}