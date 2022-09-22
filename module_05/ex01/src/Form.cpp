#include "../inc/Form.hpp"

Form::Form() : _name("none"), _grade_sign(100), _grade_exec(50), _sign(false) {};

Form::Form(std::string const name, const int grade_sign, const int grade_exec ) 
	: _name(name), _grade_sign(grade_sign), _grade_exec(grade_exec), _sign(false) {
		if (_grade_sign > 150 || _grade_exec > 150)
			throw GradeTooLowException();
		else if (_grade_sign < 1 || _grade_exec < 1)
			throw GradeTooHighException();

	std::cout << "Default constructor " << name << std::endl;
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
	return _sign;
}

int Form::getGradeSign() const {
	return _grade_sign;
};

int Form::getGradeExec() const {
	return _grade_exec;
};

void Form::beSigned(Bureaucrat& obj) {
	if (obj.getGrade() > _grade_sign)
		this->_sign = true;
	else
		throw(Form::GradeTooLowException());
}