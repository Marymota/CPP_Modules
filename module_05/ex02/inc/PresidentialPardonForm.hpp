#ifndef __PRESIDENTIALPARDONFORM_HPP__
#define __PRESIDENTIALPARDONFORM_HPP__

#include "../inc/Form.hpp"

class Form;

class PresidentialPardonForm : public Form {

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const std::string& );
		PresidentialPardonForm(const PresidentialPardonForm&);
		PresidentialPardonForm& operator=(const PresidentialPardonForm&);
		~PresidentialPardonForm();
};

std::ostream& operator<<(std::ostream&, const PresidentialPardonForm&); //Overload (<<) operator

#endif