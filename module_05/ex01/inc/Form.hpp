#ifndef __FORM_HPP__
#define __FORM_HPP__

#include "../inc/Bureaucrat.hpp"
#include "../inc/Exception.hpp"

class Bureaucrat;

class Form {
																										
	public:
		Form();
		Form(std::string const, const int, const int);
		Form(const Form&);
		Form& operator=(const Form&);
		~Form();

	
		//Getters
		std::string getName() const;
		bool getSign() const;
		int getGradeSign() const;
		int getGradeExec() const;

		// Changes the form status if Bureaucrat grade is high enough
		// throw a Form::GradeTooLowException
		void beSigned(Bureaucrat&);

	private:											
		std::string const _name; 										
		const int _grade_sign;			
		const int _grade_exec;
		bool _sign;

		void GradeTooHighException();
		void GradeTooLowException();
};

std::ostream& operator<<(std::ostream&, const Bureaucrat&); //Overload (<<) operator


#endif