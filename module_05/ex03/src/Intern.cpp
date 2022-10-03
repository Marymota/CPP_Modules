#include "../inc/Intern.hpp"

/* Class */
Intern::Intern() {}

Intern::Intern(const Intern& obj) {
	*this = obj;
}

Intern& Intern::operator=(const Intern& obj) {
	*this = obj;
	return *this;
}

Intern::~Intern(){}

int Intern::filterforms(std::string form) {
	std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardom"};
	for (int i = 0; i <= 2; i++) {
		if (form.compare(forms[i]) == 0) 
			return i ;
	}
	return (-1);
}

ShrubberyCreationForm* Intern::_SCF(std::string target){
	return new ShrubberyCreationForm(target);
}

RobotomyRequestForm* Intern::_RRF(std::string target){
	return new RobotomyRequestForm(target);
}

PresidentialPardonForm* Intern::_PPF(std::string target){
	return new PresidentialPardonForm(target);
}

Form* Intern::makeForm(std::string form, std::string target) {
	int formID = filterforms(form);
	switch (formID)
	{
	case 0:
		std::cout << "Intern creates " << form << std::endl;
		return (_SCF(target));
	case 1:
		std::cout << "Intern creates " << form << std::endl;
		return (_RRF(target));
	case 2:
		std::cout << "Intern creates " << form << std::endl;
		return (_PPF(target));
	default:
	std::cout << "The specified form doesn't exist!" << std::endl;
		return (0);
	}
}


/* Throw Exceptions */
const char* Intern::FormNotFound::what() const throw () {
	return "The specified form doesn't exist!";
}
