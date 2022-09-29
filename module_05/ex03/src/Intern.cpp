#include "../inc/Intern.hpp"

/* Class */
Intern::Intern() {}

Intern::Intern(const Intern& obj) {
	*this = obj;
}

Intern& Intern::operator=(const Intern& obj) {
	this->_grade = obj._grade;
	return *this;
}

Intern::~Intern(){}

Form* Intern::makeForm(std::string form, std::string target) {
	
	std::cout << "intern creates " << form << std::endl;
	return ();
}



/* Throw Exceptions */
const char* Intern::GradeTooHighException::what() const throw () {
	return "Exception: Grade is too high!";
}

const char* Intern::GradeTooLowException::what() const throw () {
	return "Exception: Grade is too low!";
}
