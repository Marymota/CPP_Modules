#ifndef __FORM_HPP__
#define __FORM_HPP__

#include <cstdlib>
#include <fstream>
#include "../inc/Bureaucrat.hpp"


class Bureaucrat;

class Form {							// Form class
			
	private:							// private (not protected)
		std::string const _name; 		// constant name
		bool _sign;						// boolean for sign/unsigned
		const int _grade_sign;			// constant grade required for signing
		const int _grade_exec;			// constant grade required for execution

	public:
		Form();
		Form(std::string const, const int, const int);
		Form(const Form&);
		Form& operator=(const Form&);
		~Form();
	
		//Getters
		std::string getName() const;
		bool		getSign() const;
		int			getGradeSign() const;
		int			getGradeExec() const;

		// Changes the form status if Bureaucrat grade is high enough
		// else throw a Form::GradeTooLowException
		void beSigned(Bureaucrat&);

		void execute(Bureaucrat const& executor) const;

		// Throw Exceptions
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw ();
		};

		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw ();
		};

		class FormAlreadySigned : public std::exception {
			public:
				const char* what() const throw ();
		};

	protected:
		virtual void _execute() const = 0;
	
	// Function declared but not defined inside the Base class, only in the derived classes.
	// The function _execute() of the correspondent class type of form will be called instead. 
};

std::ostream& operator<<(std::ostream&, const Form&); //Overload (<<) operator


#endif