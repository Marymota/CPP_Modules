#include "../inc/Bureaucrat.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/Intern.hpp"

#include <iostream>
#include <exception>

 //WHY SEGFAULT?
void segfault (void) {
 	std::cout << std::endl;
 	Intern someRandomIntern;
 	Bureaucrat cloud("Cloud", 4);
 	std::cout << cloud << std::endl;
 	Form* rrf;
 	try {
 		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
 		cloud.executeForm(*rrf);
 	} catch (const std::exception& e) {
 		std::cerr << e.what() << std::endl;
 	}
 	delete rrf;
}

void shrubb() {
 	Intern someRandomIntern;
 	Form* rrf;
 	try {
 		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
 	} catch (const std::exception& e) {
 		std::cerr << e.what() << std::endl;
 	}
 	delete rrf;
}

void robot() {
 	Intern someRandomIntern;
 	Form* rrf;
 	try {
 		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
 	} catch (const std::exception& e) {
 		std::cerr << e.what() << std::endl;
 	}
 	delete rrf;
}

void president() {
 	Intern someRandomIntern;
 	Form* rrf;
 	try {
 		rrf = someRandomIntern.makeForm("presidential pardom", "Bender");
 	} catch (const std::exception& e) {
 		std::cerr << e.what() << std::endl;
 	}
 	delete rrf;
}

void other() {
 	Intern someRandomIntern;
 	Form* rrf;
 	try {
 		rrf = someRandomIntern.makeForm("cloud creation", "Bender");
 	} catch (const std::exception& e) {
 		std::cerr << e.what() << std::endl;
 	}
 	delete rrf;
}

int main (void) {
	shrubb();
	robot();
	president();
	other();
	segfault();
 	return 0;
 }

