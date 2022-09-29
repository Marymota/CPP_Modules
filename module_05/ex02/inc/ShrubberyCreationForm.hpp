#ifndef __SHRUBBERYCREATIONFORM_HPP__
#define __SHRUBBERYCREATIONFORM_HPP__

#include "../inc/Form.hpp"

class Form;

class ShrubberyCreationForm : public Form {

	private:
		std::string _target;
		
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm( const std::string& );
		ShrubberyCreationForm( const ShrubberyCreationForm& );
		ShrubberyCreationForm& operator=( const ShrubberyCreationForm& );
		~ShrubberyCreationForm();

		void _execute() const;
};


std::ostream& operator<<(std::ostream&, const ShrubberyCreationForm&); //Overload (<<) operator

#endif