#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/Form.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) 
	: Form(target + "_shrubbery", 145, 137), _target(target + "_shrubbery" ){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj) : Form() {
	*this = obj;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj) {
	(void) obj;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::_execute( ) const {
	std::ofstream file;
	file.open(_target.c_str());
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