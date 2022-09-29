#include "../inc/Bureaucrat.hpp"
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"


#include <iostream>
#include <exception>

static void validgrade() {
	std::cout << "--------------" << std::endl;
	std::cout << "| Valid Grade |" << std::endl;
	std::cout << "--------------" << std::endl;
	try {
		Bureaucrat A("A", 1);
		ShrubberyCreationForm form("home");
		A.executeForm(form);
		std::cout << std::endl;
	}
	catch (const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
}

static void invalidgrade() {
	std::cout << "-----------------" << std::endl;
	std::cout << "| Invalid Grade |" << std::endl;
	std::cout << "-----------------" << std::endl;
	try {
		Bureaucrat A("A", 150);
		ShrubberyCreationForm form("home");
		A.executeForm(form);
		std::cout << std::endl;
	}
	catch (const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
}

static void b_validgrade() {
	std::cout << "-----------------" << std::endl;
	std::cout << "| Valid Grade |" << std::endl;
	std::cout << "-----------------" << std::endl;
	try {
		Bureaucrat A("A", 4);
		PresidentialPardonForm form("Cloud");
		A.executeForm(form);
		std::cout << std::endl;
	}
	catch (const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
}


static void b_invalidgrade() {
	std::cout << "-----------------" << std::endl;
	std::cout << "| Invalid Grade |" << std::endl;
	std::cout << "-----------------" << std::endl;
	try {
		Bureaucrat A("A", 50);
		PresidentialPardonForm form("Cloud");
		A.executeForm(form);
		std::cout << std::endl;
	}
	catch (const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
}

static void c_validgrade() {
	std::cout << "-----------------" << std::endl;
	std::cout << "| Valid Grade |" << std::endl;
	std::cout << "-----------------" << std::endl;
	try {
		Bureaucrat A("A", 10);
		RobotomyRequestForm form("Cloud");
		A.signForm(form);
		A.executeForm(form);
		std::cout << form << std::endl;
		std::cout << std::endl;
	}
	catch (const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
}

static void c_invalidgrade() {
	std::cout << "-----------------" << std::endl;
	std::cout << "| Invalid Grade |" << std::endl;
	std::cout << "-----------------" << std::endl;
	try {
		Bureaucrat A("A", 100);
		RobotomyRequestForm form("Cloud");
		A.signForm(form);
		A.executeForm(form);
		std::cout << std::endl;
	}
	catch (const std::exception& e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
}

int main (void) {
	validgrade();
	invalidgrade();
	b_validgrade();
	b_invalidgrade();
	c_validgrade();
	c_invalidgrade();
	return 0;
}