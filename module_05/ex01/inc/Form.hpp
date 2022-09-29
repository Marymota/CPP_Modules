#ifndef __FORM_HPP__
#define __FORM_HPP__

#include "../inc/Bureaucrat.hpp"

class Bureaucrat;

class Form {										// Form class
			
	private:											// private (not protected)
		std::string const _name; 		// constant name
		bool _sign;									// boolean for sign/unsigned
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
		bool getSign() const;
		int getGradeSign() const;
		int getGradeExec() const;

		// Changes the form status if Bureaucrat grade is high enough
		// else throw a Form::GradeTooLowException
		void beSigned(Bureaucrat&);

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



};

std::ostream& operator<<(std::ostream&, const Form&); //Overload (<<) operator


#endif