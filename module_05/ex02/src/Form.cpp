#include "../inc/Form.hpp"

Form::Form() : _name("none"), _sign(false), _grade_sign(0), _grade_exec(0) {};

Form::Form(std::string const name, const int grade_sign, const int grade_exec ) 
	: _name(name), _sign(false), _grade_sign(grade_sign), _grade_exec(grade_exec) {
		if (_grade_sign > 150 || _grade_exec > 150)
			throw GradeTooLowException();
		else if (_grade_sign < 1 || _grade_exec < 1)
			throw GradeTooHighException();
};

Form::Form(const Form& obj) : _name(obj._name), _sign(obj._sign), _grade_sign(obj._grade_sign), _grade_exec(obj._grade_exec) {
	*this = obj;
};

Form& Form::operator=(const Form& obj) {
	*this = obj;
	return *this;
};

Form::~Form() {};

std::string Form::getName() const {	return _name; }

bool Form::getSign() const { return _sign; }

int Form::getGradeSign() const { return _grade_sign; }

int Form::getGradeExec() const { return _grade_exec; }

void Form::beSigned(Bureaucrat& bureaucrat) {
	if (bureaucrat.getGrade() <= _grade_sign) {
		if (_sign == false)
			_sign = true;
		else
			throw(FormAlreadySigned());
	}
	else
		throw(GradeTooLowException());
}

void Form::execute(Bureaucrat const& executor) const {
	if (executor.getGrade() <= _grade_exec)
			ShrubberyCreationForm::execute(executor);
	else
		throw(GradeTooLowException());
}


const char* Form::GradeTooHighException::what() const throw () {
	return "Form::Exception: Grade is too high!";
}

const char* Form::GradeTooLowException::what() const throw () {
	return "Form::Exception: Grade is too low!";
}

const char* Form::FormAlreadySigned::what() const throw () {
	return "Form::Exception: Form already signed";
}

std::ostream& operator<<(std::ostream& output, const Form& obj) {
	output << "Form: " << obj.getName() << " sign grade: " << obj.getGradeSign() << ";\n";
	output << "Execution grade: " << obj.getGradeExec() << ";\n"; 
	if (obj.getSign())
		output << "<signed>";
	else
		output << "<unsigned>";
	return output;
}