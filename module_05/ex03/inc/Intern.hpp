#ifndef __INTERN_HPP__
#define __INTERN_HPP__

#include <exception>
#include <iostream>
#include "Form.hpp"

class Form;
class Intern {									// class Intern

	private:
		const std::string _name;				// constant name
		int _grade;											// grade (1 - 150) decrescent
		
	public:
		Intern();
		Intern(const Intern&);
		Intern& operator=(const Intern&);
		~Intern();

		Form* makeForm(std::string, std::string);

		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw ();
		};

		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw ();
		};
};



#endif