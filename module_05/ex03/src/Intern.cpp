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
	for (int i = 0; i < 3; i++) {
		if (form.compare(forms[i]) == 0) 
			return i + 1;
	}
	return (0);
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
	case 1:
		_SCF(target);
		std::cout << "Intern creates " << form << std::endl;
		break;
	case 2:
		_RRF(target);
		std::cout << "Intern creates " << form << std::endl;
		break;
	case 3:
		_PPF(target);
		std::cout << "Intern creates " << form << std::endl;
		break;
	default:
		throw FormNotFound();
	}
	return (0);
}


/* Throw Exceptions */
const char* Intern::FormNotFound::what() const throw () {
	return "The specified form doesn't exist!";
}
