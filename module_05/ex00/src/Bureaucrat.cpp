#include "../inc/Bureaucrat.hpp"

/* Class */
Bureaucrat::Bureaucrat() : _name("none"), _grade(0){}

Bureaucrat::Bureaucrat(std::string const& name, int grade) : _name(name), _grade(grade) {
	if (_grade < 1 ) 
		throw GradeTooHighException();
	else if (_grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) {
	*this = obj;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj) {
	this->_grade = obj._grade;
	return *this;
}

Bureaucrat::~Bureaucrat(){}


/* Getters */
std::string Bureaucrat::getName() const {	return _name; }

int Bureaucrat::getGrade() const { return _grade;	}


/* Methods */
void Bureaucrat::increment() {
	if (--_grade < 1)
		throw GradeTooHighException();
}

void Bureaucrat::decrement() {
	if (++_grade > 150)
		throw GradeTooLowException();
}

/* Throw Exceptions */
const char* Bureaucrat::GradeTooHighException::what() const throw () {
	return "Exception: Grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw () {
	return "Exception: Grade is too low!";
}

/* Overload operator */
std::ostream& operator<<(std::ostream& output, const Bureaucrat& obj) {
	output << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return output;
}
