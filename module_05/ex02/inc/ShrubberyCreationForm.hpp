#ifndef __SHRUBBERYCREATIONFORM_HPP__
#define __SHRUBBERYCREATIONFORM_HPP__

#include "../inc/Form.hpp"

class ShrubberyCreationForm : public Form {

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string& );
		ShrubberyCreationForm( const ShrubberyCreationForm& );
		ShrubberyCreationForm& operator=( const ShrubberyCreationForm& );
		virtual ~ShrubberyCreationForm();
};

#endif