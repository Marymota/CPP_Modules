#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

#include <exception>
#include <iostream>
#include "Form.hpp"

class Form;
class Bureaucrat {									// class Bureaucrat

	private:
		const std::string _name;				// constant name
		int _grade;											// grade (1 - 150) decrescent
		
	public:
		Bureaucrat();
		Bureaucrat(std::string const& name, int grade);
		Bureaucrat(const Bureaucrat&);
		Bureaucrat& operator=(const Bureaucrat&);
		~Bureaucrat();

		std::string getName() const;
		int getGrade() const;
		void increment();
		void decrement();

		void signForm(Form&);
		void executeForm(Form const& form);

		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw ();
		};

		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw ();
		};
};

std::ostream& operator<<(std::ostream& output, const Bureaucrat& obj);


#endif