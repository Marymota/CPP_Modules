#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/Form.hpp"

class Form;

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target){
	std::cout << target << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj) : Form() {
	*this = obj;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj) {
	(void) obj;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}