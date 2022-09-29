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

void ShrubberyCreationForm::_execute() const{
	std::ofstream file;
	file.open("_shrubbery");
	file << 
"            =-/	\n"
"    \\|/   \\\\ /	\n"
"   \\ |  //_//-<_	\n"
"=--\\\\\\//\\|//-=	\n"
"    \\\\\\////_	\n"
"      |||/			\n"
"      ||||			\n"
".....//|||\\....	\n";

	std::cout <<
"	    =-/			\n"
"     \\|/  \\\\ /	\n"
"    \\ | //_//-<_	\n"
"=--\\\\\\//\\|//-=	\n"
"    \\\\\\////_	\n"
"      |||/			\n"
"      ||||			\n"
".....//|||\\....   \n";
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