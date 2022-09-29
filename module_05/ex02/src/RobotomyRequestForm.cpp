#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/Form.hpp"

class Form;

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : 
		Form("Robotomy_to_" + target + ";\n", 72, 45){}

void RobotomyRequestForm::_execute() const { 
	srand(time(0));																	
	int magic = rand();
	std::cout << "*** ZZZZZZZZZZZZZ *** " << std::endl;
	if (magic % 2 == 0)
		std::cout << "Robotomy failed..." << std::endl;
	else
		std::cout << "Robotomy successful!" << std::endl;
}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj) : Form() {
	*this = obj;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj) {
	(void) obj;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

std::ostream& operator<<(std::ostream& output, const RobotomyRequestForm& obj) {
	output << obj.getName() << "Sign grade: " << obj.getGradeSign() << ";\n";
	output << "Execution grade: " << obj.getGradeExec() << ";\n"; 
	if (obj.getSign())
		output << "<signed>";
	else
		output << "<unsigned>";
	return output;
}