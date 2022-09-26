#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/Form.hpp"

class Form;

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target){
	std::cout << target << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) : Form() {
	*this = obj;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj) {
	(void) obj;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}