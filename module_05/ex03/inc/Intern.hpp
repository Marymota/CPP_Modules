#ifndef __INTERN_HPP__
#define __INTERN_HPP__

#include <exception>
#include <iostream>
#include "../inc/ShrubberyCreationForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"

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

		int filterforms(std::string);

		ShrubberyCreationForm*	_SCF(std::string);
		RobotomyRequestForm* 		_RRF(std::string);
		PresidentialPardonForm*	_PPF(std::string);

		class FormNotFound : public std::exception {
			public:
				const char* what() const throw ();
		};

};



#endif