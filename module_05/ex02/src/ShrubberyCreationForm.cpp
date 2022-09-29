#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/Form.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) 
	: Form(target + "_shrubbery" + ";\n", 145, 137){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj) : Form() {
	*this = obj;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj) {
	(void) obj;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}


void ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
	std::ofstream file;
	file.open((target + "_shrubbery").c_str());
	file << 
"		 	         =-/		\n"
"			\\|/    \\\\ /	\n"
"			\\ |  //_//-<_	\n"
"	=--\\\\\\//\\|//-=	\n"
"		\\\\\\////_				\n"
"	      |||/					\n"
"	      ||||					\n"
"	.....//|||\\....   	\n";

	file.close();
}


std::ostream& operator<<(std::ostream& output, const ShrubberyCreationForm& obj) {
	output << obj.getName() << "Sign grade: " << obj.getGradeSign() << ";\n";
	output << "Execution grade: " << obj.getGradeExec() << ";\n"; 
	if (obj.getSign())
		output << "<signed>";
	else
		output << "<unsigned>";
	return output;
}