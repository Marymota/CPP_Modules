#include "../inc/Form.hpp"

Form::Form() : _name("none"), _grade_sign(100), _grade_exec(50), _sign(false) {};

Form::Form(std::string const name, const int grade_sign, const int grade_exec ) 
	: _name(name), _grade_sign(grade_sign), _grade_exec(grade_exec), _sign(false) {
		if (_grade_sign > 100 || _grade_exec > 100)
			throw GradeTooLowException();
		else if (_grade_sign < 1 || _grade_exec < 1)
			throw GradeTooHighException();
};

Form::Form(const Form& obj) : _name(obj._name), _grade_sign(obj._grade_sign), _grade_exec(obj._grade_exec), _sign(obj._sign) {
	*this = obj;
};

Form& Form::operator=(const Form& obj) {
	*this = obj;
	return *this;
};

Form::~Form() {};

std::string Form::getName() const {
	return _name;
}

bool Form::getSign() const {
	if (_sign)
		std::cout << "signed ";
	else
		std::cout << "unsigned ";
	return _sign;
}

int Form::getGradeSign() const {
	return _grade_sign;
};

int Form::getGradeExec() const {
	return _grade_exec;
};

void Form::beSigned(Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() <= _grade_sign)
		_sign = true;
	else
		throw(GradeTooLowException());
}

const char* Form::GradeTooHighException::what() const throw () {
	return "Grade is too high!";
}

const char* Form::GradeTooLowException::what() const throw () {
	return "Grade is too low!";
}

std::ostream& operator<<(std::ostream& output, const Form& obj) {
	output << "Form: " << obj.getName() << " sign grade " << obj.getGradeSign() << " " << obj.getSign() ;
	return output;
}