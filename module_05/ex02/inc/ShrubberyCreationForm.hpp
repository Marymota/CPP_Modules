#ifndef __SHRUBBERYCREATIONFORM_HPP__
#define __SHRUBBERYCREATIONFORM_HPP__

#include "../inc/Form.hpp"

class Form;

class ShrubberyCreationForm : public Form {

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm( const std::string& );
		ShrubberyCreationForm( const ShrubberyCreationForm& );
		ShrubberyCreationForm& operator=( const ShrubberyCreationForm& );
		virtual ~ShrubberyCreationForm();
};

		void execute(Bureaucrat const& executor) const;

std::ostream& operator<<(std::ostream&, const ShrubberyCreationForm&); //Overload (<<) operator

#endif