#include "../inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("none"), _grade(0){
	std::cout << "Bureaucrat Default Consructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const& name, int grade) : _name(name), _grade(grade) {
	if (_grade < 1 ) 
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
	std::cout << "Default Bureaucrat consructor name" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) {
	std::cout << "Copy Bureaucrat consructor" << std::endl;
	*this = obj;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj) {
	std::cout << "Assignment Operator Bureaucrat consructor" << std::endl;
	this->_grade = obj._grade;
	return *this;
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat Destructor" << std::endl;
}

std::string Bureaucrat::getName() const {
	return _name;
}

int Bureaucrat::getGrade() const {
	return _grade;	}

void Bureaucrat::increment() {
	if (--_grade < 1) {
		throw GradeTooHighException();
	}
}

void Bureaucrat::decrement() {
	if (++_grade > 150)
		throw GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw () {
	return "Grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw () {
	return "Grade is too low!";
}

std::ostream& operator<<(std::ostream& output, const Bureaucrat& obj) {
	output << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return output;
}
