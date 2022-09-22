#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

#include <iostream>

class Bureaucrat {

		std::string _name;
		int _grade;
		
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat&);
		Bureaucrat& operator=(const Bureaucrat&);
		~Bureaucrat();
		std::string getName() const;
		int getGrade() const;
		void increment();
		void decrement();

		void signForm();
		// Confirm form is signed: <bureaucrat> signed <form> / 
		// <bureaucrat> couldn0t sign <form> because <reason>
};

std::ostream& operator<<(std::ostream& output, const Bureaucrat& obj);


#endif