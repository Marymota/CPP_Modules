#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/Form.hpp"

class Form;

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : 
	Form("Pardon_to_" + target + ";\n", 25, 5), _target(target){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) : Form() {
	*this = obj;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj) {
	(void) obj;
	return *this;
}

void PresidentialPardonForm::_execute() const{
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}


PresidentialPardonForm::~PresidentialPardonForm() {}

std::ostream& operator<<(std::ostream& output, const PresidentialPardonForm& obj) {
	output << obj.getName() << "Sign grade: " << obj.getGradeSign() << ";\n";
	output << "Execution grade: " << obj.getGradeExec() << ";\n"; 
	if (obj.getSign())
		output << "<signed>";
	else
		output << "<unsigned>";
	return output;
}