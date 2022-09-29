#ifndef __ROBOTOMYREQUESTFORM_HPP__
#define __ROBOTOMYREQUESTFORM_HPP__

#include "../inc/Form.hpp"

class Form;

class RobotomyRequestForm : public Form {

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const std::string& );
		RobotomyRequestForm( const RobotomyRequestForm& );
		RobotomyRequestForm& operator=( const RobotomyRequestForm& );
		~RobotomyRequestForm();

		void _execute() const;

};

std::ostream& operator<<(std::ostream&, const RobotomyRequestForm&); //Overload (<<) operator


#endif
