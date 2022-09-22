#include "../inc/Bureaucrat.hpp"
#include "../inc/Exception.hpp"

Bureaucrat::Bureaucrat() : _name("none"), _grade(0){
	std::cout << "Bureaucrat Default Consructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	if (_grade < 1 || _grade > 150) 
		throw(Exception("Wrong grade"));
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
		throw(Exception("Grade is too high!"));
	}

}

void Bureaucrat::decrement() {
	if (++_grade > 150)
		throw (Exception("Grade is too low!"));
}

std::ostream& operator<<(std::ostream& output, const Bureaucrat& obj) {
	output << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return output;
}
