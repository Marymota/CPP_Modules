#include "../inc/Bureaucrat.hpp"
#include "../inc/Form.hpp"

Bureaucrat::Bureaucrat() : _name("none"), _grade(0){};

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

void Bureaucrat::signForm(Form& form) {
	try {
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	}
	catch (std::exception& e){
		std::cout << _name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}
