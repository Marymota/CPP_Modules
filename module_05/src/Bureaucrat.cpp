#include "../inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("none"), _grade(0){
	std::cout << "Bureaucrat Default Consructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	std::cout << "Default Bureaucrat consructor name" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) {
	std::cout << "Copy Bureaucrat consructor" << std::endl;
	this->_name = obj._name;
	this->_grade = obj._grade;
	*this = obj;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj) {
	std::cout << "Assignment Operator Bureaucrat consructor" << std::endl;
	this->_name = obj._name;
	this->_grade = obj._grade;
	return *this;
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat Destructor" << std::endl;
}

std::string Bureaucrat::getName() {
	return _name;
}

int Bureaucrat::getGrade() {
	return _grade;	}

void Bureaucrat::increment() {
	if (_grade < 1) 
		throw "Grade is too high!";
	_grade--;
}

void Bureaucrat::decrement() {
	if (_grade > 150)
		throw "Grade is too high!";
	_grade++;
}
