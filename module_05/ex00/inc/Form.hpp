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

		void setSigned();

		// Changes the form status if Bureaucrat grade is high enough
		// throw a Form::GradeTooLowException
		void beSigned(Bureaucrat&);

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


	private:											
		std::string const _name; 										
		const int _grade_sign;			
		const int _grade_exec;
		bool _sign;

};

std::ostream& operator<<(std::ostream&, const Form&); //Overload (<<) operator


#endif