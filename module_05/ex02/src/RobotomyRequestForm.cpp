#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/Form.hpp"

class Form;

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target){
	std::cout << target << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj) : Form() {
	*this = obj;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj) {
	(void) obj;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}